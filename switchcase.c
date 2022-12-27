#include<stdio.h>
int main()
{
    char a;
    printf("enter your choice \n");
    scanf("%c",&a);

    switch(a)
    {
        case 'A':
        puts("excellent choice");
        break;

        case 'B':
        puts("common choice");
        break;

        case 'C':
        puts("not good choice");
        break;

        default:
        puts("not valid ");

    }
    return 0;
}
