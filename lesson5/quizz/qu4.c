#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int num =0 , count =0 ,binary[32];

    printf("Enter a number ");
     fflush(stdin);
    fflush(stdout);
    scanf("%d",&num);
int org = num;
    for (int i = 32 ; i>0 ; i-- )
    {

        if (num%2==0)
        binary[count] =0;
        else
        binary[count] =1;
     num = num / 2;
     ++count;
    }
    printf("%d in binary is : ",org);
    for (int i = 31 ; i>=0 ; i-- )
    {
    printf("%d",binary[i]);
    }
    printf("\n the forth least significant bit is  : %d ", binary[3]);


    return;
}
