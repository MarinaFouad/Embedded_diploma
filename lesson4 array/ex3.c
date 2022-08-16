#include <stdio.h>
#include <stdlib.h>

int main() {

	int r , c;
	printf ("Enter rows and column of matrix : \n");
    scanf("%d",&r);
    scanf("%d",&c);
    int ar[r][c] , tran[c][r];
    printf ("Enter elements of matrix : \n");
	for (int i =0 ; i<r ; i++ )
	{
		for (int j =0 ; j<c ; j++ )
		{
			printf ("Enter elemnt (%d,%d) :",i+1,j+1);
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Entered matrix : \n ");

	for (int i =0 ; i<r ; i++ )
	{
		for (int j =0 ; j<c ; j++ )
		{

			printf("%d  ",ar[i][j]);
		}
		printf("\n");
	}

	printf("transposed matrix : \n ");

	for (int i =0 ; i<c ; i++ )
	{
		for (int j =0 ; j<r ; j++ )
		{
			tran[i][j]= ar[j][i];
			printf("%d  ",tran[i][j]);
		}
		printf("\n");
	}

return(1);}
