#include<stdio.h>
void main()
{
    int n,temp,reverse=0;
    printf("enter the number");
    scanf("%d", &n);
    temp=n;
    while (temp != 0)
    {
        reverse = reverse*10 + temp%10;
        temp=temp/10;
    }

    if(reverse == n)
    {
    printf("given number is a palindrome");
    }
    else
    {
    printf("given number is not palindrome");
    }
}