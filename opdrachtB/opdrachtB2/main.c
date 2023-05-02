#include <stdio.h>
#include <math.h>

int isPriemGetal(int);
void printResultaat(int);

void main(){
    int getal;
    int priemgetal;
    printf("Geef hier een getal om te kijken of dit een priemgetal is: ");
    scanf("%d", &getal);

    priemgetal = isPriemGetal(getal);
    printResultaat(priemgetal);

}

int isPriemGetal(int g){
    if (g < 2){
        return 0;
    }
    if(g >= 2){
        for(int i = 2; i >= (sqrt(g)); i++){
            if (g % i == 0){
                return 0;
            }
            if (g % i == 1){
                return 1;
            }
        }
    }
}

void printResultaat(int w){
    if (!w){
        printf("\nDit is geen priemgetal");
    }
    if (w){
        printf("\n dit is een priemgetal!");
    }
}

