#include <stdio.h>
#include <stdlib.h>

int main() {
	float arr1[2][2] , arr2[2][2], arr3[2][2];
	printf ("Enter elements of 1st array : /\n");

	for (int i =0 ; i<2 ; i++ )
	{
		for (int j =0 ; j<2 ; j++ )
		{
			printf ("Enter elemnt %d%d " , i+1 , j+1);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf ("Enter elements of 2st array : \n ");
		for (int i =0 ; i<2 ; i++ )
		{
			for (int j =0 ; j<2 ; j++ )
			{
				printf ("Enter elemnt %d%d " , i+1 , j+1);
				scanf("%f",&arr2[i][j]);
			}
		}
	printf ("the sum is : \n ");
	for (int i =0 ; i<2 ; i++ )
			{
				for (int j =0 ; j<2 ; j++ )
				{
					arr3[i][j] = arr1[i][j] + arr2[i][j];
					printf("%.1f   ",arr3[i][j]);

				}
				printf("\n");
			}
	return (0);
}
