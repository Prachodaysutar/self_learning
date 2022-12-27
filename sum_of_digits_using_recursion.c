#include<stdio.h>
    int sumofdigits(int num)
    {
        static int sum=0;
        int rem;
        sum=sum+(num%10);
        rem=num/10;
        if(rem>0)
        {
            sumofdigits(rem);
        }
    return sum;
    }
    int main()
    {
        int j, num;
        printf("enter the number: ");
        scanf("%d",&num);
        printf("sum of digits of the number :%d ",sumofdigits(num));
        
    }