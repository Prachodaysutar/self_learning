#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("a is greatest number ");
    }
    else if(b>=a && b>=c)
    {
        printf("b is greatest number ");
    }
    else if(c>=a && c>=b)
    {
        printf("c is the greatest number ");
    }
    
}