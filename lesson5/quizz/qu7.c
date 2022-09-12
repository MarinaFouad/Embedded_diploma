#include <stdio.h>
#include <stdlib.h>

int power (int number)

{
    double i =0;
    i = log (number) / log (3);
    if (i== trunc (i) )
        printf("0");
    else
        printf("1");
}

int main ()
{

    int num =0 ;

     printf("Enter a number ");
     fflush(stdin);
    fflush(stdout);
    scanf("%d",&num);

power(num);

    return;
}
