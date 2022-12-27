#include<stdio.h>
int main()
{
    char x;
    printf("enter your choice 1 or 2 or 3 : \n");
    scanf("%c",&x);

    switch(x)
    {
        case'1':
        puts("red");
        break;

        case'2':
        puts("green");
        break;

        case'3':
        puts("blue");
        break;

        default:
        puts("invalid");

    }

    return 0;
}
