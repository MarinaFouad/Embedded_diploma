#include <stdio.h>

struct distance
{
    float feet;
    float inch;
}  ;

int main()
{
    struct distance dis1 , dis2 , sum;
    printf("Enter information of the 1st distance \n");
    printf("Enter feet : ");
    scanf("%f",&dis1.feet);
    printf("Enter inch : ");
    scanf("%f",&dis1.inch);
    printf("Enter information of the 2st distance \n");
    printf("Enter feet : ");
    scanf("%f",&dis2.feet);
    printf("Enter inch : ");
    scanf("%f",&dis2.inch);

    sum.feet= dis1.feet + dis2.feet;
    sum.inch= dis1.inch + dis2.inch;

    if (sum.inch>12)
    {
        sum.inch = sum.inch-12;
        ++sum.feet;
    }
    printf("\n the sum \n ");
    printf("the feet %f \' %f \" ",sum.feet,sum.inch);

    return;
}
