#include<stdio.h>
#define MEALS 3
int main()
{
    int calories[MEALS];
    int x,total=0;
    puts("calories counter:");
    for(x=0;x<MEALS;x++)
    {
        printf("calories of meal %d : ",x+1);
        scanf("%d",&calories[x]);
       // printf("\n");
        total = total + calories[x];

    }
    printf("total calories you had is %d",total);

    return 0;

}
