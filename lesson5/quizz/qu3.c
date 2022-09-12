#include <stdio.h>
#include <stdlib.h>

void rev (int a[],int couunt)
{
    int  length=0 ,i ;

    int revv[couunt];

    for ( i= couunt-1 ; i >=0 ; i--)
    {
        revv[i]= a[length];
        ++length;
    }

        printf("the reversed array is: ");

     for( i=0; i<couunt ; i++)
    {
        printf("%d ",revv[i]);
    }
}

int main ()
{

    int  count;
    printf("Enter the size:");
    scanf("%d",&count);
     int fr[count] ;
    printf("Enter the array :");

        for(int i=0; i<count ; i++)
    {
        scanf("%d",&fr[i]);
    }
    rev(fr,count);



    return;
}
