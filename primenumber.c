#include<stdio.h>
void main()
{
    int num,i=0,temp=0;
    printf("enter the number to check prime");
    scanf("%d",& num);
    for(i=2;i<=(num/2);i++)
    {
        if(num%i==0)
        {
        temp=1;
        break;
        }
    }
   if(temp==1){
   printf("given number is not prime number ");
   }
   else
   {
   printf("its a prime number ");
   }
}