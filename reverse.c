#include<stdio.h>
int main()
{
    int num=123,reverse=0;
    printf("before number is : %d \n",num);
    while(num !=0)
    {
        reverse = reverse*10 + num % 10;
        num=num/10;

    }
    printf("after reverse :%d \n",reverse);
    return 0;
}