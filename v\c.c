#include <stdio.h>
int main() {
	char n;
	int l,u;
	printf("\n");
	scanf("%s",&n);

l=((n =='a')||(n =='e')||(n =='i')||(n =='o')||(n =='u'));
u=((n =='A')||(n =='E')||(n =='I')||(n =='O')||(n =='U'));
if(l||u)
{
printf("vowel");
}
else
{
printf("not vowel");
}
	return 0;
}
