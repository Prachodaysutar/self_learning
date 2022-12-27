#include<stdio.h>
int max (int x,int y);
void islarger(int big);

int main()
{
    int a,b,larger;
    printf("enter any two numbers by spacing between them \n");
    scanf("%d %d",&a,&b);
    larger = max(a,b);
    if(a=larger)
    islarger(a);
     if(a==b)
        same(a,b);
    else
    islarger(b);


    return 0;
}
int max(int x, int y)
{
    if(x>y)
    return x;
    return y;

}
void islarger(int big)
{
    printf("value %d is larger \n",big);

}
int eq(int x,int y)
{
    if(x==y)
    printf("same values");
    printf("invalid");
}
void same(int equals)
{
    printf("value %d is same",equals);
}


