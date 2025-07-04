#include<stdio.h>
int main()
{
    float f;
    double c,k;
    printf("Enter Temperature in Fahrenheit:- ");
    scanf("%f",&f);

    c=(f-32)*5/9; 
    k=c+273.15;
    
    printf("Temperature in Fahrenheit : %f",c);
    printf("\nTemperature in Kelvin : %f",k);

    return 0;   
}