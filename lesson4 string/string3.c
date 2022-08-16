#include <stdio.h>
#include <stdlib.h>

int main() {

	char w[100];
int l=0;
	printf ("Enter the string : ");
	gets(w);


	l = strlen(w)-1;

	char tran;
	for (int i=0 ; i< l ; i++)
    {
        tran = w[i];
        w[i]=w[l];
        w[l]=tran;
        l--;
    }
     printf("reverse string is: %s",w);


	return(1);}
