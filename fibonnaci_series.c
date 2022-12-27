#include<stdio.h>
void main()
{
    int n,i=0,first=0,second=1,result;
    printf("enter the number upto which digit fibonacci series need to find");
    scanf("%d",&n);
    printf("fibonacci series is :");
    for(i=0;i<n;i++)
    {
        if(i<=1)
        result=i;
        else{
            result=first+second;
            first=second;
            second=result;
        }
        printf("%d \t",result);
    }
}