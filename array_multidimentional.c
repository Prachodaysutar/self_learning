#include<stdio.h>
void main()
{
    char names[3][9]={"apple","nokia","samsung","gopro"};
    int x;
    names[2][4]='k';
    for(x=0;x<3;x++)
    {
        printf("%s \n",names[x]);
    }

}