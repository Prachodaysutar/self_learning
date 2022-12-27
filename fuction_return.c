#include<stdio.h>
//#define PF "printf"
char givemeA(void);
int main()
{
    char grade;
    grade = givemeA();
    PF(" this gives the character %c \n",grade);
    return 0;

}
char givemeA(void)
{
    return('A');
}
