#include<stdio.h>
void main()
{   int j=0;
    char sam[]="space in program \n";
    int len = strlen(sam);
    char sam2[len];
    for(int i=0;i<len ; i++)
    {
        if(sam[i] != ' ')
        {
            sam2[j]=sam[i];
            j++;
        }
    }
    printf("%s %s ",sam,sam2);

}
