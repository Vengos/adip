#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void initializegenerator()
{
    srand(time(NULL));
}

int karteziehen()
{
 int zufall = rand() % 9 + 2;

 return zufall;
}

int main()
{
    int karte;
    int action;
    int spieler = 0;
    int dealer = 0;

    initializegenerator();
    karte = karteziehen();

    do
    {
        spieler += karteziehen();
        printf("Spieler hat %i\n", spieler);

        if(spieler > 21)
        {
            printf("Spieler hat verloren");
            return 0;
        }

        printf("Noch eine Karte ziehe? JA(1) NEIN(0)\n");
        scanf("%i", &action);

    }
    while(action == 1);

    while(dealer <= 16)
    {
        dealer += karteziehen();

        if(dealer > 21)
        {
            printf("Dealer hat %i\n", dealer);
            printf("Dealer hat verloren");
            return 0;
        }
    }

    printf("Dealer hat %i\n", dealer);

    if(spieler > dealer)
    {
        printf("Spieler hat gewonnen\n");
    }
    else
    {
        printf("Dealer hat gewonnen\n");
    }

    return 0;
}
