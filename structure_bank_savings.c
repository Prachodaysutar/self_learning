#include<stdio.h>
int main()
{
    struct bank
    {
        int account;
        float ammount;
    };
    struct bank checking, savings;  
    checking.account = 123321;
    checking.ammount = 34000;
    savings.account = 321423;
    savings.ammount = 900000;
    printf("Checking account %d and ammount is %f \n",checking.account,checking.ammount);
    printf("Saving account %d and ammount is %f",savings.account,savings.ammount);
}