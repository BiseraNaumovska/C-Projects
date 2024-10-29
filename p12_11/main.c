/*
Проект 4:

1. Да се напише програм кој дефинира тип vraboten, кој има полиња за ID, име, презиме, возраст, пол, брачна состојба, кредибилност
(цел број од 0-100 кој означува кредитна историја, што поголем број, тоа бил вработениот поуспешен во враќање кредити), адреса,
тековна плата и поранешна плата.

Да се овозможи внесување на повеќе вработени во низа и да се направат 3 сортирања (sort_kred, sort_tekovnaPlata, sort_minataPlata) по
кредибилност, по тековна и по поранешна плата.

Да се направи и функција koregiraj_vraboten која овозможува предефинирање на податоците за еден вработен внесен преку неговиот ID.

Да се направи и функција koregiraj_kredibilnost која за сите вработени ја корегира нивната кредибилност на следниот начин:
ако тековната плата им е поголема од претходната, тогаш ја зголемува кредибилноста за 3 и ја изедначува тековната со поранешната плата,
ако тековната плата е помала од претходната, тогаш ја намалува кредибилноста за 3 и ја изедначува тековната од поранешната плата,
инаку ништо не менува за вработениот.

Да се обезбеди мени кое на корисникот на апликацијата ќе му овозможи која функција да ја повика. Може да има максимум 50 вработени, но
корисникот на апликацијата го внесува бројот на вработени кои сака да ги внесе, на почетоткот на користењето на апликацијата.

 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VRABOTENI 50

typedef struct {
    int id;
    char ime[50];
    char prezime[50];
    int vozrast;
    char pol[10];
    char bracna_sostojba[20];
    int kredibilnost; // од 0 до 100
    char adresa[100];
    float tekovna_plata;
    float poraneshna_plata;
} Vraboten;

void dodaj_vraboten(Vraboten* vraboteni, int* broj_vraboteni) {
    if (*broj_vraboteni >= MAX_VRABOTENI) {
        printf("MAKSIMALNIOT BROJ NA VRABOTENI E DOSTIGNAT!\n");
        return;
    }

    Vraboten v;
    printf("Vnesi ID: ");
    scanf("%d", &v.id);
    printf("Vnesi ime: ");
    scanf("%s", v.ime);
    printf("Vnesi prezime: ");
    scanf("%s", v.prezime);
    printf("Vnesi vozrast: ");
    scanf("%d", &v.vozrast);
    printf("Vnesi pol: ");
    scanf("%s", v.pol);
    printf("Vnesi brachna sostojba: ");
    scanf("%s", v.bracna_sostojba);
    printf("Vnesi kredibilnost (0-100): ");
    scanf("%d", &v.kredibilnost);
    printf("Vnesi adresa: ");
    scanf(" %[^\n]", v.adresa); // za vnesuvanje adresen prostor
    printf("Vnesi tekovna plata: ");
    scanf("%f", &v.tekovna_plata);
    printf("Vnesi poraneshna plata: ");
    scanf("%f", &v.poraneshna_plata);

    vraboteni[*broj_vraboteni] = v;
    (*broj_vraboteni)++;
    printf("Vraboteniot e uspeshno dodaden.\n");
}

void prikazi_vraboteni(Vraboten* vraboteni, int broj_vraboteni) {
    for (int i = 0; i < broj_vraboteni; i++) {
        Vraboten v = vraboteni[i];
        printf("ID: %d, Ime: %s, Prezime: %s, Vozrast: %d, Pol: %s, Brachna sostojba: %s, KRedibilnost: %d, Adresa: %s, Tekovna plata: %.2f, Poraneshna plata: %.2f\n",
               v.id, v.ime, v.prezime, v.vozrast, v.pol, v.bracna_sostojba, v.kredibilnost, v.adresa, v.tekovna_plata, v.poraneshna_plata);
    }
}

int sporedi_kredibilnost(const void* a, const void* b) {
    return ((Vraboten*)b)->kredibilnost - ((Vraboten*)a)->kredibilnost;
}

int sporedi_tekovnaPlata(const void* a, const void* b) {
    return ((Vraboten*)b)->tekovna_plata - ((Vraboten*)a)->tekovna_plata;
}

int sporedi_poraneshnaPlata(const void* a, const void* b) {
    return ((Vraboten*)b)->poraneshna_plata - ((Vraboten*)a)->poraneshna_plata;
}

void koregiraj_vraboten(Vraboten* vraboteni, int broj_vraboteni) {
    int id;
    printf("Vnesete ID na vraboteniot koj sakate da go koregirate: ");
    scanf("%d", &id);

    for (int i = 0; i < broj_vraboteni; i++) {
        if (vraboteni[i].id == id) {
            printf("Vnesi novo ime: ");
            scanf("%s", vraboteni[i].ime);
            printf("Vnesi novo prezime: ");
            scanf("%s", vraboteni[i].prezime);
            printf("Vnesi nova vozrast: ");
            scanf("%d", &vraboteni[i].vozrast);
            printf("Vnesi nov pol: ");
            scanf("%s", vraboteni[i].pol);
            printf("Vnesi nova brachna sostojba: ");
            scanf("%s", vraboteni[i].bracna_sostojba);
            printf("Vnesi nova kredibilnost: ");
            scanf("%d", &vraboteni[i].kredibilnost);
            printf("Vnesi nova adresa: ");
            scanf(" %[^\n]", vraboteni[i].adresa);
            printf("Vnesi nova tekovna plata: ");
            scanf("%f", &vraboteni[i].tekovna_plata);
            printf("Vnesi nova poraneshna plata: ");
            scanf("%f", &vraboteni[i].poraneshna_plata);
            printf("Uspeshno promeneto.\n");
            return;
        }
    }
    printf("Vraboteniot ne e pronajden.\n");
}

void koregiraj_kredibilnost(Vraboten* vraboteni, int broj_vraboteni) {
    for (int i = 0; i < broj_vraboteni; i++) {
        if (vraboteni[i].tekovna_plata > vraboteni[i].poraneshna_plata) {
            vraboteni[i].kredibilnost += 3;
            if (vraboteni[i].kredibilnost > 100) {
                vraboteni[i].kredibilnost = 100; // max kredi
            }
            vraboteni[i].poraneshna_plata = vraboteni[i].tekovna_plata;
        } else if (vraboteni[i].tekovna_plata < vraboteni[i].poraneshna_plata) {
            vraboteni[i].kredibilnost -= 3;
            if (vraboteni[i].kredibilnost < 0) {
                vraboteni[i].kredibilnost = 0; // min kredi
            }
            vraboteni[i].poraneshna_plata = vraboteni[i].tekovna_plata;
        }
    }
}

void menu() {
    Vraboten vraboteni[MAX_VRABOTENI];
    int broj_vraboteni = 0;
    int izbor;

    do {
        printf("\nIzberi opcija:\n");
        printf("1. Vnesi vraboteni\n");
        printf("2. Prikazi vraboteni\n");
        printf("3. Sortiraj po kredibilnost\n");
        printf("4. Sortiraj po tekovna plata\n");
        printf("5. Sortiraj po poraneshna plata\n");
        printf("6. Koregiraj vraboten\n");
        printf("7. Koregiraj kredibilnost\n");
        printf("8. Izlez\n");

        printf("Izbor: ");
        scanf("%d", &izbor);

        switch (izbor) {
        case 1:
            dodaj_vraboten(vraboteni, &broj_vraboteni);
            break;
        case 2:
            prikazi_vraboteni(vraboteni, broj_vraboteni);
            break;
        case 3:
            qsort(vraboteni, broj_vraboteni, sizeof(Vraboten), sporedi_kredibilnost);

            break;
        case 4:
            qsort(vraboteni, broj_vraboteni, sizeof(Vraboten), sporedi_tekovnaPlata);

            break;
        case 5:
            qsort(vraboteni, broj_vraboteni, sizeof(Vraboten), sporedi_poraneshnaPlata);

            break;
        case 6:
            koregiraj_vraboten(vraboteni, broj_vraboteni);
            break;
        case 7:
            koregiraj_kredibilnost(vraboteni, broj_vraboteni);

            break;
        case 8:

            break;
        default:
            printf("ERROR.\n");
        }
    } while (izbor != 8);
}

int main() {
    menu();
    return 0;
}
