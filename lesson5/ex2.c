#include <stdio.h>
#include <stdlib.h>

  static int count=1;
int fact(int postive )
{



    if (postive > 0)
{

        count = count * postive;
        --postive;
        fact(postive);
}




}

int main ()
{
    int pos;
    printf("Enter an postive number ");
    scanf("%d",&pos);
    fact(pos);
    printf("factorial of %d = %d ", pos, count);

    return;
}
