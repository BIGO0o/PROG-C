
#include <stdio.h>
#include <string.h>

double Fahrenheit(double);
double Kelvin(double);
void printAf(double, double, double);

void main(){
    double F;
    double K;
    double celcius;

    printf("Geef de temperatuur in graden celcius: ");
    scanf("%lf", &celcius);
    F = Fahrenheit(celcius);
    K = Kelvin(celcius);

    printAf(celcius, F, K);

}

double Fahrenheit(double c){
    return (c *1.8 + 32);
}

double Kelvin(double c){
    return (c + 273.15);
}

void printAf(double c, double f, double k){
    printf("C\tK\tF\n");
    printf("%.2lf\t%.2lf\t%.2lf", c, k, f);
}

