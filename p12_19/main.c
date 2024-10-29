/*1. Вие сте сопственик на продавница за компјутерска опрема.
 * Треба да си направите апликација која ќе се грижи за хардверот
 * што го имате на располагање, количината на секој од деловите
 * во продавницата и цените на деловите. Напишете програма која
 * иницијализира датотека “hardware.dat”, ви овозможува да внесете
 * податоци за секој дел, да ги излистате податоците за специфичен
 * дел, да дадете комплетен листинг на состојбата во вашата
 * продавница, да избришете податоци за даден дел ако тој веќе го
 * немате на лагер, да ажурирате податоци за даден дел и да
 * правите продажба. Под продажба се подразбира намалување на
 * бројот на потребни делови од датотеката, доколку има толку делови,
 *  колку што бара купецот. Да претпоставиме дека имаме оптички
 *  читач на касата и дека секој дел се вчитува со негов код.

За започнување со работа, користете ги следните информации:
Код 	Име на дел	 Количина	  Цена
3       glusec Mico      7       10.34
56      monitor Kiki3    5       65.09
75      tastatura Biko8  4       12.09
89      matploc Ziko32   6       87.09

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototipovi
void add_hardware(int kod, const char *ime, int kolichina, float cena);
void list_hardware();
void delete_hardware(int kod);
void update_hardware(int kod, int kolichina, float cena);
void sell_hardware(int kod, int kolichina);


typedef struct{
    int kod;
    char ime[50];
    int kolichina;
    float cena;
}Hardver;

int main(){
    int choice, kod, kolichina;
    float cena;
    char ime[50];

    //inicijalizacija na datoteka
    FILE *file;
    if((file = fopen("hardware.txt" , "w")) == NULL){
        printf("ERROR\n");
        return;
    }

    Hardver parts[] = {
        {3, "glusec Mico", 7, 10.34},
        {56, "monitor Kiki3", 5, 65.09},
        {75, "tastatura Biko8", 4, 12.09},
        {89, "matploc Ziko32", 6, 87.09}
    };

    fwrite(parts, sizeof(Hardver), 4, file);
    fclose(file);

    // za vnes na izbor
    do{
        printf("\n1. Vnesi nov hardverski del\n");
        printf("2. Izlistaj hardver \n");
        printf("3. Izbrishi hardver \n");
        printf("4. Azuriraj hardver \n");
        printf("5. Prodazba \n");
        printf("0. IZLEZ \n");
        printf("\nIzberi opcija: ");
        scanf("%d", &choice);

        //spored opciite
        switch(choice){
        case 1: //vnesi nov hardverski del
            printf("Odbravte opcija za da vnesete nov hardverski del \n");
            printf("Vnesi kod: ");
            scanf("%d", &kod);
            printf("Vnesi ime: ");
            scanf("%s", ime);
            printf("Vnesi kolichina: ");
            scanf("%d", &kolichina);
            printf("Vnesi cena: ");
            scanf("%f", &cena);
            // povikuvanje funkcija
            add_hardware(kod, ime, kolichina, cena);
            break;
        case 2: // listanje na hardver
            printf("Odbravte opcija za da go izlistate hardverot \n");
            list_hardware();
            break;
        case 3: // izbrishi hardver
            printf("Odbravte opcija za da izbrishete hardver \n");
            printf("Vnesi kod na proizvod za da go izbrishesh: ");
            scanf("%d", &kod);
            delete_hardware(kod);
            break;
        case 4: //azuriranje na hardver
            printf("Vnesovte opcija za azuriranje na hardver \n");
            printf("Vnesi kod za azuriranje: ");
            scanf("%d", &kod);
            printf("Vnesi nova kolichina na proizvod: ");
            scanf("%d" , &kolichina);
            printf("Vnesi nova cena na proizvod: ");
            scanf("%f",&cena);
            update_hardware(kod, kolichina, cena);
            break;
        case 5: // prodazba
            printf("Odbravte opcija za prodazba \n");
            printf("Vnesete kod za prodazba");
            scanf("%d", &kod);
            printf("Vnesi kolichina za prodazba: ");
            scanf("%d", &kolichina);
            sell_hardware(kod, kolichina);
            break;
        case 0:
            printf("Izleguvanje od programata.\n");
            break;
        default:
            printf("Nevalidna opcija, obidete se povtorno.\n");
        }
    }while(choice != 0); // 0 za kraj
    return 0;
}


void add_hardware(int kod, const char *ime, int kolichina, float cena){
    FILE *file;
    if((file = fopen("hardware.txt", "a"))== NULL){
        // a = Додади. Отвори или создади датотека за ажурирање. Запишувањето се врши на крајот на датотеката
        printf("ERROR\n");
        return;
    }else{
        Hardver part = {kod, "" , kolichina, cena};
        strcpy(part.ime , ime);
        fwrite(&part, sizeof(Hardver), 1, file);
        fclose(file);
    }

}
void list_hardware(){
    FILE *file;
    Hardver part;
    if((file = fopen("hardware.txt", "r")) == NULL){
        printf("Error \n");
        return;
    }else{
        printf("Kod\tIme na del\tKolichina\tCena\n");
        while(fread(&part, sizeof(Hardver), 1, file)){
            printf("%d\t%s\t\t%d\t%.2f\n", part.kod, part.ime, part.kolichina, part.cena);
        }
        fclose(file);
    }
}
void delete_hardware(int kod){
    Hardver part;
    FILE *file = fopen("hardware.txt", "r");
    FILE *tempfile=fopen("temp.txt", "w");
    if(file == NULL || tempfile == NULL){
        printf("Error\n");
        return;
    }else{
        while(fread(&part,sizeof(Hardver), 1, file)){
            if(part.kod != kod){
                fwrite(&part, sizeof(Hardver), 1, tempfile);
            }
        }
        fclose(file);
        fclose(tempfile);
        remove("hardware.txt");
        rename("temp.txt", "hardware.txt");
    }
}
void update_hardware(int kod, int kolichina, float cena){
    FILE *file = fopen("hardware.txt", "r");
    FILE *tempfile=fopen("temp.txt", "w");
    Hardver part;
    if(file == NULL || tempfile == NULL){
        printf("Error\n");
        return;
    }else{
        while(fread(&part, sizeof(Hardver), 1, file)){
            if(part.kod == kod){
                part.kolichina = kolichina;
                part.cena = cena;
            }
            fwrite(&part, sizeof(Hardver), 1, tempfile);
        }
        fclose(file);
        fclose(tempfile);
        remove("hardware.txt");
        rename("temp.txt", "hardware.txt");
    }

}
void sell_hardware(int kod, int kolichina){
    FILE *file = fopen("hardware.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (file == NULL || tempFile == NULL) {
        printf("Ne mozham da ja otvoram datotekata.\n");
        return;
    }

    Hardver part;
    while (fread(&part, sizeof(Hardver), 1, file)) {
        if (part.kod == kod) {
            if (part.kolichina >= kolichina) {
                part.kolichina -= kolichina;
            } else {
                printf("Nedostatok na kolicina za delot so kod %d.\n", kod);
            }
        }
        fwrite(&part, sizeof(Hardver), 1, tempFile);
    }

    fclose(file);
    fclose(tempFile);
    remove("hardware.txt");
    rename("temp.txt", "hardware.txt");

}



