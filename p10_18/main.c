/*
Проект 3. Да се изработи до понеделник 29.01.2007
Да се направи програма во која ќе се сместат оцени на студенти по
предмети (дводимензионална низа во која во редици се студентите, а
во колони се нивните оцени по 5 предмети). Програмата треба да го
нуди следниот кориснички посредник:

Vnesi izbor:
0 Ispechati ja nizata so oceni
1 Najdi ja maksimalnataocena
2 Najdi ja minimalnata ocena
3 Ispecati ja prosechnata ocena za sekoja student
4 Kraj

Програмата да се реши со користење на покажувачи до функциите max,
min, pecatiNiza, рrosek. Покажувачите кон четирите функции да се
сместат во низата obrabotiOceni, а како индекс за повикување на
секоја од функкциите да се користи изборот од корисничкото мени.

Забелешка: Една рестрикција при користење на покажувачи кон функции
е што сите функции мора да се од ист тип. Покажувачите мора да се
со иста повратна вредност и да примаат аргументи од ист тип.
Наједноставно би било кога ниту една од функциите нема да враќа
вредност, но ќе печати вредности, а како аргумент би се предавале
оцени за еден студент.

*/

#include <stdio.h>

#define STUDENTI 3
#define PREDMETI 5

void pechatiNiza(int oceni[STUDENTI][PREDMETI]);
void maksimalnaOcena(int oceni[STUDENTI][PREDMETI]);
void minimalnaOcena(int oceni[STUDENTI][PREDMETI]);
void prosechnaOcena(int oceni[STUDENTI][PREDMETI]);


int main()
{
    int oceni[STUDENTI][PREDMETI] = {{8,9,7,10,10} , {7,7,6,9,9} , {10,10,10,9,8}};

    void(*obrabotiOceni[])(int oceni[STUDENTI][PREDMETI]) = {pechatiNiza,maksimalnaOcena, minimalnaOcena, prosechnaOcena};

    int izbor;

    do{
        printf("Vnesi izbor: \n");
        printf("0 Ispechati ja nizata so oceni\n");
        printf("1 Najdi ja maksimalnata ocena\n");
        printf("2 Najdi ja minimalnata ocena\n");
        printf("3 Ispechati ja prosechnata ocena za sekoj student\n");
        printf("4 Kraj\n");
        scanf("%d", &izbor);

        if(izbor >=0 && izbor<4){
            obrabotiOceni[izbor](oceni);
        }

    }while(izbor != 4);
    printf("Programata zavrshi \n");

    return 0;
}



void pechatiNiza(int oceni[STUDENTI][PREDMETI]){
    printf("Nizata ke se pechati\n");
    for(int i=0;i<STUDENTI;i++){
        printf("Studen %d:", i+1);
        for(int j=0;j<PREDMETI;j++){
            printf("%d\t", oceni[i][j]);
        }
        printf("\n");
    }
}
void maksimalnaOcena(int oceni[STUDENTI][PREDMETI]){
    int max = oceni[0][0];
    for (int i = 0; i < STUDENTI; i++) {
        for (int j = 0; j < PREDMETI; j++) {
            if (oceni[i][j] > max) {
                max = oceni[i][j];
            }
        }
    }
    printf("Maksimalnata ocena e: %d\n", max);
}
void minimalnaOcena(int oceni[STUDENTI][PREDMETI]){
    int min = oceni[0][0];
    for (int i = 0; i < STUDENTI; i++) {
        for (int j = 0; j < PREDMETI; j++) {
            if (oceni[i][j] < min) {
                min = oceni[i][j];
            }
        }
    }
    printf("Minimalnata ocena e: %d\n", min);

}
void prosechnaOcena(int oceni[STUDENTI][PREDMETI]){
    int globalenzbir = 0;
    for(int i=0;i<STUDENTI;i++){
        int zbir=0;
        for(int j=0;j<PREDMETI;j++){
            zbir = zbir + oceni[i][j];
            globalenzbir = globalenzbir + oceni[i][j];
        }
        float prosek = zbir/(float)PREDMETI;
        printf("Prosechnata ocena na student %d e: %.2f\n", i + 1, prosek);
    }
    float globalenprosek = globalenzbir/(float)(PREDMETI*STUDENTI);
    printf("Prosechnata ocena na site studenti e: %.2f\n", globalenprosek);

}







