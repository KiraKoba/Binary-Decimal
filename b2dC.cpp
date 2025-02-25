#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
        else {
            printf("Invalid character detected: %c\n", numBIN[i]);
            break;
        }
    }

    printf("The decimal value is: %d\n", numDEC); 

    system("pause");
}
