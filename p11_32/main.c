/*2. Напиши програм кој чита датум во обликот 14/06/2005 и враќа
 * датум во обликот 14 juni 2005. Корисникот да има можност да
 * внесува колку што сака датуми кои треба да бидат конвертирани
 * во другиот излез.*/

#include <stdio.h>
#include <string.h>

void convertDate(char *date);

int main()
{
    char date[11];

    while (1) {
        printf("Vnesi datum vo format dd/mm/yyyy (ili vnesi 'stop' za kraj): ");
        scanf("%s", date);

        if (strcmp(date, "stop") == 0) {
            break;
        }

        convertDate(date);
    }
    return 0;
}

void convertDate(char *date){
    char day[3], month[3], year[5];
    char *months[] = {"januari", "februari", "mart", "april", "maj", "juni", "juli", "avgust", "septemvri", "oktomvri", "noemvri", "dekemvri"};

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    int monthIndex = atoi(month);

    printf("%s %s %s\n", day, months[monthIndex - 1], year);
}
