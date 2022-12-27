#include<stdio.h>
#include<string.h>
int main()
{
    char first[]="i like to go ";
    char second[]="here from there";
    char buffer[64];
    strcpy(buffer,first);
    strcat(buffer,second);
    puts(buffer);
    return 0;
}
