#include <stdio.h>
#include <stdlib.h>

int prime(int i , int j)
{ int count=0;


    printf("the prime numbers between %d & %d are :", i , j );
    for (i; i<=j ; i++)
    {
        if (i%2==0)
            count++;
        else if (i%3==0)
            count++;
        else
           printf("%d ",i);

    }
}

int main()
{
   int n , r;

 printf("Enter two numbers (interval) :");
    scanf("%d",&n);
    scanf("%d",&r);

prime(n,r);



return;
}
