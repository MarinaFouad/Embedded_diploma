#include <stdio.h>
#include <stdlib.h>

int main() {
int num;
 printf("enter the number of data : ");
 scanf("%d",&num);
 float arr[num] , sum=0;
  for (int i =0 ; i<num ; i++)
  {
      printf("enter number :");
      scanf("%f",&arr[i]);
      sum = sum + arr[i];
  }
 printf("Average = %f", sum/num);
return (1); }
