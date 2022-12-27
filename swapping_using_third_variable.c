#include<stdio.h>
void main()
{
    int A,B;
    printf("enter the value of A:");
    scanf("%d",&A);
    printf("enter the value of B:");
    scanf("%d",&B);
    int temp;
    temp=A;
    A=B;
    B=temp;
    printf("After swapping value of A is %d and B is %d",A,B);
}