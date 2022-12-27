#include<stdio.h>
void cheers(void);
int main()
{
    puts("free dinner");
    cheers();
    puts("free dessert");
    cheers();
    return 0;

}
void cheers(void)
{
    int x;
    for(x=0;x<3;x++)
    printf("huzzah!");
    putchar('\n');

}
