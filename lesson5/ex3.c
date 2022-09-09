#include <stdio.h>
#include <stdlib.h>

void reverse()
{
    char sent;
    scanf("%c",&sent);
    if(sent!='\n')
    {
        reverse();
        printf("%c",sent);
    }

}

int main()
{

   printf("Enter a sentance:");
    reverse();
    return 0;
}


