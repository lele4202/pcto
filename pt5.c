#include <stdio.h>

int main ()
{
    int a;
    int b; 

    printf ("inserisci due numeri\n");
    scanf ("%d %d", &a, &b);

    if(a%b == 0)
    {
         printf("multiplo\n");
    }
    else 
    {
        printf("non multiplo\n");
    }
}