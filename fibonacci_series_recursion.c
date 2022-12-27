#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("enter the input for fibonacci series");
    scanf("%d",&n);
    printf("fibonacci series is :");
    for(i=0;i<n;i++)
    {
        printf("%d \t",fibo(i));

    }
}
int fibo(int i)
{
    if(i==0) return 0;
    else if(i==1) return 1;
    else return(fibo(i-1)+ fibo(i-2));
}