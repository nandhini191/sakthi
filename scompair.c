#include<stdio.h>
int main()
{
char a[20],b[20];
printf("enter the character");
scanf("%s",&a);
printf("enter rhe character");
scanf("%s",&b);
if(strcmp(a,b)==0)
{
printf("string is equal");
}
else
{
printf("string not equal");
}
}
