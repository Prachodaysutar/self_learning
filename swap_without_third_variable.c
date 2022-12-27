#include<stdio.h>
void main()
{
    int a,  b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("***after swapping values: \n");
    printf("%d is the value of a \n",a);
    printf("%d is the value of b",b);
       
}