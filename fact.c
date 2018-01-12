#include <stdio.h>

int main(void) {
	int fact=1,i,n=5;
	for(i=1;i<=5;i++)
	{
		fact=fact*i;
	}
	printf("%d\n",fact);
	return 0;
}
