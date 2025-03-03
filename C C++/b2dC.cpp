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

bool isBinary(char *binStrg) {
    while (*binStrg != '\0') {
        if (*binStrg != '0' && *binStrg != '1') {
            return false;
        }
        binStrg++;
    }
    return true;
}

bool verifyYN(char choice) {
    if (choice == 'y' || choice == 'Y') {
        return true;
    } else if (choice == 'n' || choice == 'N') {
        return true;
    } else {
        printf("Invalid input! Try again.\n");
        getch();
        return false;
    }
}

int main() {
    int flag, loopFlag = 1, binDecResult = 0;
    char binStrg[100], binaryFlag;

    do {
        system("cls");
        printf("##### Binary & Decimal Converter #####");
        printf("\n\n\t\t<<< MENU >>>\n1- Binary to Decimal\n2- Decimal to Binary\n3- Exit\n> Select an option:");
        while (scanf("%d", &flag) != 1 || flag < 1 || flag > 3) {
            printf("\nInvalid input! Please enter a valid option (1, 2 or 3): ");
            while (getchar() != '\n');
        }

        switch (flag) {
            case 1:
                do {
                    system("cls");
                    printf("##### Binary to Decimal #####\n\n");
                    while (1) {
                        printf("Type your binary number:");
                        scanf("%99s", binStrg); //overflow protection;

                        if (isBinary(binStrg)) {
                            break;
                        }
                        printf("\nInvalid binary number! Try again.\n");
                        getch();
                    }
                    binDecResult = binConvertor(binStrg);
                    printf("The decimal value is: %d\n", binDecResult);
                    printf("\n\nPress any key to continue...");
                    getch();

                    do {
                        system("cls");
                        printf("Would you like to convert another number? (y/n):");
                        scanf(" %c", &binaryFlag);
                        printf("\n");
                    }while (!verifyYN(binaryFlag));
                }while (binaryFlag == 'y' || binaryFlag == 'Y');
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

