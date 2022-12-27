#include<Stdio.h>
#include<string.h>
int main()
{
    int input[64];
    int len;
    printf("instruction: \n");
    fgets(input,64,stdin);
    len = strlen(input);
    printf("you typed %d charcter of instruction .\n",len);
    return 0;

}
