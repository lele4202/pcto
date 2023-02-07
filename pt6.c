#include <stdio.h>
int main ()
{
    float temp;
float F;
float K;
    printf("ïnserisci la temperatura in gradi Celsius\n ");
    scanf("%f", &temp);

    if (temp < -273.15)

    {
        printf("impossibile\n");

    }

    else
    {
        F=9/5 * temp + 32;
        K=temp +273.15;
        printf( "la temperatura in F è %f\n" , F);
        printf( "la temperatura in K è %f\n" , K);
    }
}