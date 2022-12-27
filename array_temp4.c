#include<stdio.h>
#include<string.h>
int main()
{
    float temps[4]={1.2,2.3,44.4,3.5};
    int x;
    printf("local temperatures are:\n");
    for(x=0;x<4;x++)
    {
        printf("station %d : %.1f\n",x,temps[x]);

    }
    return 0;

}
