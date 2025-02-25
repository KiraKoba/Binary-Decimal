#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
int main(int argc, char const *argv[])
{
    char numBIN[100];
    int numDEC = 0;
    printf("Type your binary number:\n");
    scanf("%s", numBIN);

    system("cls");
    printf("Your number in binary: %s\n", numBIN);
    int i;
    int length = strlen(numBIN);
    for (i = 0; i < length; i++)
    {
        if (numBIN[i] == '0' || numBIN[i] == '1')
        {
            numDEC = numDEC * 2 + (numBIN[i] - '0');
        }
        else
        {
            printf("Invalid character detected: %c\n", numBIN[i]);
            break;
        }
    }

    printf("The decimal value is: %d\n", numDEC);

    system("pause");
}
*/
int main()
{
    int flag, stop = 0, numDec, stopBinDec = 0;
    char numBin[100];

    do
    {
        system("cls");
        printf("##### Binary & Decimal Converter #####");
        printf("\n\n\t\t<<< MENU >>>\n1- Binary to Decimal\n2- Decimal to Binary\n3- Exit\n");
        scanf("%i", &flag);

        switch (flag)
        {
        case 1:
            do
            {
                system("cls");
                printf("<<< Binary to Decimal >>>\nType your binary: \n");
                scanf("%s", numBin);

                system("cls");
                int i;
                int length = strlen(numBin);
                for (i = 0; i < length; i++)
                {
                    if (numBin[i] == '0' || numBin[i] == '1')
                    {
                        numDec = numDec * 2 + (numBin[i] - '0');
                        printf("The decimal value is: %d\n", numDec);
                    }
                    else
                    {
                        printf("Invalid character detected: %c\n", numBin[i]);
                        break;
                    }
                }

                system("pause");

                printf("Do you wanna to convert another number?\n1- Yes\n0- No\n");
                scanf("%i", &stopBinDec);
            } while (stopBinDec == 0);
            break;
        case 2:
            system("cls");
            printf("<<< Decimal to Binary >>>\nType your decimal: \n");
            scanf("%i", &numDec);
            stop = 0;
            break;

        case 3:
            system("cls");
            printf("Program ended.\n");
            system("pause");
            stop = 1;
            break;

        default:
            printf("default \n");
            break;
        }
    } while (stop == 0);
}