#include <stdio.h>
#include <stdlib.h>

int main() {

	int num ,ins,loc;
	printf ("Enter number of elements : ");
    scanf("%d",&num);
    int arr[num];
    for (int i =0 ; i<num ; i++ )
	{
       arr[i]=i+1;
			printf ("%d  ",arr[i]);
    }

    printf ("\n Enter number to be inserted: ");
    scanf("%d",&ins);
    printf ("Enter location: ");
    scanf("%d",&loc);

     arr[loc-1]= ins;
     for (int i =0 ; i<num ; i++ )
	{
			printf ("%d  ",arr[i]);
    }
    return (1); }
