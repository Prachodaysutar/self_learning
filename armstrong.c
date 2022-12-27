#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int num,num1,n,i=0,result=0,temp;
	printf("enter the number to check armstrong or not:");
	scanf("%d",&num);
	num1=num;
	temp=num;

	while(num != 0)
	{
		num=num/10;
		i++;
	}
	while(num1 != 0)
	{
		n = num1 % 10;
		result = result + pow(n,i);
		num1 = num1 / 10; 
	}
	if(temp==result)
	
		printf("given number is armstrong");
	else
		printf("not a armstrong number");
		getch();


}