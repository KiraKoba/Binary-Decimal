#include <cctype>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int binConvertor(char *binStrg) {
    int decimal = 0;

    while (*binStrg != '\0') {
        decimal = decimal * 2 + (*binStrg - '0');
        binStrg++;
    }
    return decimal;
}

void decConvertor(int decimal, char *binStrg) {
    int index = 0;

    if (decimal == 0) {
        binStrg[index] = '0';
    } else {
        while (decimal > 0) {
            binStrg[index] = (decimal % 2) + '0';
            decimal /= 2;
            index++;
        }
    }
    binStrg[index] = '\0';

    int start = 0, end = index - 1;
    while (start < end) {
        char temp = binStrg[start];
        binStrg[start] = binStrg[end];
        binStrg[end] = temp;
        start++;
        end--;
    }
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

bool isDecimal(char *decimal) {
    while (*decimal != '\0') {
        if (!isdigit(*decimal)) {
            return false;
        }
        decimal++;
    }
    return true;
}

bool verifyYN(char choice) {
    if (choice == 'y' || choice == 'Y') {
        return true;
    } else if (choice == 'n' || choice == 'N') {
        return true;
    } else {
        printf("Invalid input! Please try again.\n");
        getch();
        return false;
    }
}

int main() {
    int flag, loopFlag = 1, binDecResult = 0, decInt;
    char binStrg[100], decStrg[100], binaryFlag, decBinResult[100];

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
                    while (true) {
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
                    } while (!verifyYN(binaryFlag));
                } while (binaryFlag == 'y' || binaryFlag == 'Y');
                break;

            case 2:
                do {
                    system("cls");
                    printf("##### Decimal to Binary #####\n\n");

                    while (true) {
                        printf("Type your decimal number:");
                        scanf("%99s", decStrg); //overflow protection;

                        if (isDecimal(decStrg)) {
                            break;
                        }
                        printf("\nInvalid decimal number! Try again.\n");
                        getch();
                    }
                    decInt = atoi(decStrg);
                    decConvertor(decInt, decBinResult);
                    printf("The binary value is: %s\n", decBinResult);
                    printf("\n\nPress any key to continue...");
                    getch();

                    do {
                        system("cls");
                        printf("Would you like to convert another number? (y/n):");
                        scanf(" %c", &binaryFlag);
                        printf("\n");
                    } while (!verifyYN(binaryFlag));
                } while (binaryFlag == 'y' || binaryFlag == 'Y');
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
    } while
    (loopFlag
     ==
     1
    );
}
