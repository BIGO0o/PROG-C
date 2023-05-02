#include <stdio.h>
#include <string.h>

void printAf(double);
double berekenTerm(double, double, double);

void main(){
    double t1, v, n, term;
    printf("geef hier eerst de t1 waarde en daarna de v waarde daarna de n waarde: ");
    scanf("%lf %lf %lf", &t1, &v, &n);

    term = berekenTerm(t1, v, n);
    printAf(term);
}

void printAf(double t){
    printf("De 15e-term is %.2lf .", t);
}

double berekenTerm(double t1, double v, double n){
    return (t1 + (n-1)*v);
}