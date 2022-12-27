#include<stdio.h>
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    int copy=num ,temp=0;
    while(copy !=0)
    {
        temp = copy%10;
        if((temp==0)||(temp==1))
        {
        copy = copy/10;
        if(copy==0)
        {
            printf("valid binary number ");
            break;
        }
    }
    else{
        printf("not valid");
        main();
    }
}
}