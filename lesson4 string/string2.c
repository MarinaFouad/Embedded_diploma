#include <stdio.h>
#include <stdlib.h>

int main() {

	int count=0;
	char w[100];

	printf ("Enter the string : ");
	gets(w);


	for (int i=0 ; i< sizeof(w) ; i++)
    {
        if (w[i]==0)
            break;
            else
                count++;
    }
    printf("the length is %d",count);
	return(1);}
