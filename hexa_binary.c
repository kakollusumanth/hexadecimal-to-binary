#include <stdio.h>
#define MAX 1000
#include<string.h>

int main()
{
    char binarynum[MAX], hexa[MAX],bin[MAX]="";
    long int i = 0;

    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            strcat(bin,"0000");break;
        case '1':
            strcat(bin,"0001"); break;
        case '2':
            strcat(bin,"0010"); break;
        case '3':
            strcat(bin,"0011"); break;
        case '4':
           strcat(bin,"0100"); break;
        case '5':
            strcat(bin,"0101"); break;
        case '6':
            strcat(bin,"0110"); break;
        case '7':
            strcat(bin,"0111"); break;
        case '8':
            strcat(bin,"1000"); break;
        case '9':
            strcat(bin,"1001"); break;
        case 'A':
            strcat(bin,"1010"); break;
        case 'B':
            strcat(bin,"1011"); break;
        case 'C':
            strcat(bin,"1100"); break;
        case 'D':
            strcat(bin,"1101"); break;
        case 'E':
            strcat(bin,"1110"); break;
        case 'F':
           strcat(bin,"1111"); break;
        case 'a':
            strcat(bin,"1010"); break;
        case 'b':
            strcat(bin,"1011"); break;
        case 'c':
            strcat(bin,"1100"); break;
        case 'd':
            strcat(bin,"1101"); break;
        case 'e':
            strcat(bin,"1110"); break;
        case 'f':
            strcat(bin,"1111"); break;
        default:
            return 0;
        }
        i++;
    }
    printf(bin);
    return 0;
}
