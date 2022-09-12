#include <stdio.h>
#include <stdlib.h>

int last(int number , int arr[] , int sizee)

{
    int count =0;
       for (int i =0 ; i<sizee ; i++)
       {
          if (arr[i]==number)
            count =i;
       }
       if (count == 0)
        printf("the last occ in : -1 ");
       else
         printf("the last occ in : %d ", count+1);
}

int main ()
{

 int num =0, arr[200] , size=0;

 printf("Enter the size ");
     fflush(stdin);
    fflush(stdout);
    scanf("%d",&size);

 printf("Enter a number ");
     fflush(stdin);
    fflush(stdout);
    scanf("%d",&num);

    printf("Enter the array ");
     fflush(stdin);
    fflush(stdout);
    for (int i=0 ; i<size ;  i++)
    {
    scanf("%d",&arr[i]);
    }

    last (num, arr , size);


    return;
}
