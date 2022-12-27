#include<stdio.h>
void main()
{
    int num1,num2,i;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++)
    {
        num1++;
    }
    printf("sum=%d",num1);
}