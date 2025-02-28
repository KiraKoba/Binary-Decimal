#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int binConvertor(char *binStrg) {
    int decimal=0;

    while (*binStrg != '\0') {
        decimal = decimal * 2 + (*binStrg - '0');
        binStrg++;
    }
    return decimal;
}

int main() {
    int flag, loopFlag = 1, binDecResult = 0;
    char binStrg[100];

    do {
        system("cls");
        printf("##### Binary & Decimal Converter #####");
        printf("\n\n\t\t<<< MENU >>>\n1- Binary to Decimal\n2- Decimal to Binary\n3- Exit\n> Select an option:");
        scanf("%i", &flag);

        switch (flag) {
            case 1:
                system("cls");
                printf("##### Binary to Decimal #####\n\n");
                printf("Type your binary number:");
                scanf("%99s", binStrg); //overflow protection
                binDecResult = binConvertor(binStrg);
                printf("The decimal value is: %d\n", binDecResult);
                printf("\n\nPress any key to continue...");
                getch();

                break;

            case 2:
                system("cls");
                printf("##### Decimal to Binary #####\n\n");
                system("pause");
                break;

            case 3:
                system("cls");
                printf("Exiting...\n\n");
                loopFlag = 0;
                system("pause");
                break;

            default:
                break;
        }
    } while (loopFlag == 1);
}

