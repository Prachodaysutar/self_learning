#include<stdio.h>
void  repeat(int count);
int main()
{
    int a=2;
    int b=7;
    puts("first print");
    repeat(a);
    puts("secondly print");
    repeat(b);
    return 0;
}

void repeat(int count)
{
    int x;
    for(x=0;x<count;x++)
    puts("nevermore!!!!!!");
}
