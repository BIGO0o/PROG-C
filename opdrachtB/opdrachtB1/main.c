#include<stdio.h>
int main(void)
{
    int a = 3;
    int b = 4;
    double c = (float)a / b;
    printf("double c = %.2lf\n", c);
    
    return 0;
}