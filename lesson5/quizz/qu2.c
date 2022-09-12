#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char fr[100] , sc[100] ;
    int  count;
    printf("Enter two names");

    gets(fr);
    gets(sc);


   count = stricmp (fr,sc);


    if (count == 0)
        printf("same name");
    else
        printf("Not same");

    return;
}
