#include<stdio.h>
int main()
{
    char ch ;
    ch = 'a';
    do
    {
        putchar(ch);
        ch++;

    }
    while(ch <= 'z');
    putchar('\n');

    return 0;

}
