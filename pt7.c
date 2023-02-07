#include <stdio.h>
int main ()
{
int a;

printf("vota da 0 a 10");
scanf("%d", &a);

if(a >= 0 && a<6)
{
    printf("ïnsufficiente");

}
else if (a >=6 && a<10)

{
    printf("sufficiente");
    }
    else 
    {
        printf("invalid");
    }
}