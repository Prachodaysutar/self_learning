#include<stdio.h>
#include<string.h>
int main()
{
    char fullname[64];
    char firstname[32];
    char lastname[32];

    printf("enter first name ");
    fgets(firstname,32,stdin);
    printf("enter last name ");
    fgets(lastname,32,stdin);

    strcpy(fullname,firstname);
    strcat(fullname,lastname);
    puts(fullname);
    return 0;
}
