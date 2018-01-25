
#include <stdio.h>                  
#include<conio.h>
int main ()
{
int d=0,e;                         
                          
while ((e=getchar())!=EOF)
{   
if(e==' ')
{ 
d++;
}
if(e=='\n')
return 0;
printf("%d",d);
}
return 0;
}
