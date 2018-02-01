#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b valuue ");
    scanf("%d",&b);
    c=a; 
    a=b;
    b=c;
    printf("after swaping,a=%2f\n",a);
    printf("after swaping,b=%2f\n",b);

    return 0;
}
