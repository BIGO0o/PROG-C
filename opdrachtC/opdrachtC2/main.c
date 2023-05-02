#include <stdio.h>

double bereken_gemiddelde (int getal)
{
    static int totaal = 0; //onthou de waarde voor wanneer je later de functie wil gebruiken.
    static int aantal_getallen = 0;

    totaal += getal;
    aantal_getallen++;
    return (double) totaal /aantal_getallen;
}
int main(void)
{
    double gemiddelde;
    while (1)
    {
    int getal;
    scanf("%d", &getal);
    if (getal == 0)
    break;
    else
    gemiddelde = bereken_gemiddelde(getal);
    }
    printf("%.1f\n", gemiddelde);

    return 0;
}