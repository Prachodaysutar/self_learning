#include<stdio.h>
float product(float a,float b,float c);
int main()
{
    float a,x,y,z;
    printf("enter three numbers by giving spaces \n");
    scanf("%f %f %f",&x,&y,&z);
    a = x*y*z;
    printf("%f *%f * %f =%f \n",x,y,z,a);
    return 0;
}
float product(float a, float b,float c)
{
    return(a*b*c);
}
