#include<stdio.h>
void main()
{
    int num;
    int a[5]={1,2,3,4,5};
    printf("enter the number you want from 1,2,3,4,5 \n");
    scanf("%d",&num);
    for(int i=0;i<5;i++)
    {
        if(a[i]==num)
        printf("%d %d",a[i],i);
    }
}
