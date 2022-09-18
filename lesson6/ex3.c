#include <stdio.h>

struct complex
{
    float real;
    float img;
}  ;
struct complex Ssum , Snum1 , Snum2 ;

int sum(struct complex Snum1,struct complex Snum2)
{
    Ssum.real= Snum1.real + Snum2.real;
    Ssum.img= Snum1.img + Snum2.img;
    printf("sum = %f + %f i",Ssum.real , Ssum.img);
}

int main()
{

    printf("Enter 1st number real and imaginary respectively \n");
    scanf("%f %f",&Snum1.real,&Snum1.img);

    printf("Enter 2nd number real and imaginary respectively \n");
    scanf("%f %f",&Snum2.real,&Snum2.img);

    sum (Snum1,Snum2);


    return;
}
