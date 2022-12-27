#include<stdio.h>
#include<ctype.h>
int main()
{
    int digi;
    do
    {
        digi=getchar();
        if(isdigit(digi))
        putchar(digi);
    }
    while(digi != '\n');
    return 0;
}
