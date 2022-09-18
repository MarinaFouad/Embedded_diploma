#include <stdio.h>
#define pi 3.1415
#define area(r)(pi*(r)*(r))

int main()
{
    float area , radius;
    printf("Enter the radius ");
    scanf("%f",&radius);
    area=area(radius);

    printf("the area= %.2f",area);


    return;
}
