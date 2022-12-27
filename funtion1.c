#include<stdio.h>
void blorf(void);
int main()
{
    puts("hello function");
    blorf();
    blorf();
    blorf();
    puts("function called");

    return 0;
}
void blorf(void)
{
    puts("this is function");
}
