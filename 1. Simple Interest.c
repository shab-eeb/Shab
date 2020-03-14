#include <stdio.h>
 
void main()
{
    float principle, time, rate, SI;
    
    printf("Enter a Principle amount:");
    scanf("%f", &principle);
    
    printf("Enter time:");
    scanf("%f", &time);
    
    printf("Enter the rate:");
    scanf("%f", &rate);
    
    SI = (principle*time*rate)/100;
    printf("Simple Intrest =%f",SI);
}
