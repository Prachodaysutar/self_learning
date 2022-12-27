#include<stdio.h>

void main()
{
     temperature();
}
int temperature()
{
    int temperature;
    printf("enter the temperature \n");
    scanf("%d",& temperature);
    if(temperature > 20)
    printf("temperature is hot");
    else
    printf("temperature is cold");

}
