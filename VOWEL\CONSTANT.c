# include<stdio.h>
#include<conio.h>
void main()
{
char a[7]={'a','e','i','o','u'},char n;
printf("enter the letter");
scanf("%s",&n);
if((n=a)||(n=e)||(n=i)||(n=o)||(n=u))
{
printf("vowel");
}
else
{
printf("constant");
}
getch();
}
