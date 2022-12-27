#include<stdio.h>
#include<string.h>
int main()
{
    char input[64];
    int len;
    printf("enter the instruction:");
    fgets(input,64,stdin);
    len = strlen(input);
    printf("entered characters are %d \n",len);
    return 0;
}
