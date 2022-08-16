#include <stdio.h>
#include <stdlib.h>

int main() {

	int num ,search;
	printf ("Enter number of elements : ");
    scanf("%d",&num);
    int arr[num];
    for (int i =1 ; i<=num ; i++ )
	{
       arr[i-1]=i+i*10;
			printf ("%d  ",arr[i-1]);
    }

    printf ("\n Enter number to be searched: ");
    scanf("%d",&search);

     for (int i =0 ; i<num ; i++ )
	{
	    if ( arr[i] == search)

			printf ("number found at the location : %d  ",i+1);
    }
    return (1); }
