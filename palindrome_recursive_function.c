#include<stdio.h>
int ispalindrome(int num);
int reverse(int num);
void main()
{
    int num;
    printf("enter the number for palindrome");
    scanf("%d",&num);
    if(ispalindrome(num)==1)
    {
        printf("given number is palindrome");
    }
    else
    {
        printf("given number is not palindrome");
    }   
}
int ispalindrome(int num)
{
    if(num==reverse(num))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num !=0)
    {
        rem = num%10;
        sum = sum*10 + rem;
        reverse(num/10);
    }
    else
    return sum;
    return sum;
}