#include<stdio.h>
int main()
{
    struct bank
    {
        int account;
        float balance;
    };
    struct bank checking;
    checking.account = 12334;
    checking.balance = 38076.98;
    printf("checking account %d has balance of  %f \n",checking.account,checking.balance);
    return 0;
}