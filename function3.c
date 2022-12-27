#include<stdio.h>
void product(float a,float b,float c);
int main()
{
    float x,y,z;
    printf("type any three number separated by space \n");
    scanf("%f %f %f",&x,&y,&z);
    product(x,y,z);
    return 0;
}
void product(float a,float b,float c)
{
    float p;
    p= a*b*c;
    printf("%f * %f * %f =%f \n",a,b,c,p);

}
