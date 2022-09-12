#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int fr[100] , sc[100] , th[100];
    int le1 , le2;
    printf("Enter the length of the two arrays and the first array has the higher length");
     fflush(stdin);
    fflush(stdout);
    scanf("%d",&le1);
    scanf("%d",&le2);
    printf("Enter first array ");
    fflush(stdin);
    fflush(stdout);

    for(int i =1 ; i<=le1 ; i++)
    {
    scanf("%d",&fr[i]);
    }

     printf("Enter second array ");
    fflush(stdin);
    fflush(stdout);

    for(int i =1 ; i<=le2; i++)
    {
    scanf("%d",&sc[i]);
    }

    for (int i =1 ; i<=le1 ; i++)
    {
        th[i]= fr[i];
        fr[i]= sc[i];
        sc[i]= th[i];
    }

    printf("the first array after swipping: ");

          for(int i =1 ; i<=le2 ; i++)
    {
    printf("%d",fr[i]);
    }

       printf("the second array after swipping: ");

          for(int i =1 ; i<=le1 ; i++)
    {
    printf("%d",sc[i]);
    }
    return;
}
