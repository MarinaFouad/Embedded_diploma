#include <stdio.h>
#include <stdlib.h>

int main() {

	int count=0;
	char cha , w[100];

	printf ("Enter the string : ");
	gets(w);
	printf("Enter a character to find frequency : ");
	scanf("%c",&cha);

	for (int i=0 ; i< sizeof(w) ; i++)
    {
        if (cha == w[i])
            count++;
        if (w[i]==0)
            break;
    }
    printf("frequancy of %c = %d",cha,count);
	return(1);}
