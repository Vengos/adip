#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[2] = {0};

    printf("Zehnerstelle eingeben:\n");
    scanf("%d", &array[0]);
    printf("Einerstelle eingeben:\n");
    scanf("%d", &array[1]);

    if(array[0] < 2 || array[0] > 6)
    {
        printf("Falsche Zahl");
        return 0;
    }

    if(array[1] != 0)
    {
        switch(array[1])
        {
            case 1 :
                printf("ein-und-");
                break;
            case 2 :
                printf("zwei-und-");
                break;
            case 3 :
                printf("drei-und-");
                break;
            case 4 :
                printf("vier-und-");
                break;
            case 5 :
                printf("fuenf-und-");
                break;
            case 6 :
                printf("sechs-und-");
                break;
            case 7 :
                printf("sieben-und-");
                break;
            case 8 :
                printf("acht-und-");
                break;
            case 9 :
                printf("neun-und-");
                break;
        }
    }

        switch(array[0])
        {
            case 2 :
                printf("zwanzig");
                break;
            case 3 :
                printf("dreissig");
                break;
            case 4 :
                printf("vierzig");
                break;
            case 5 :
                printf("fuenfzig");
                break;
            case 6 :
                printf("sechzig");
                break;
        }

    return 0;
}
