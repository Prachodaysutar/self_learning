#include<stdio.h>
void repeat(int count );
int main()
{
    puts("first its like ");
    repeat(1);
    puts("then its like ");
    repeat(5);

    return 0;
}

void repeat(int count)
{
    int x;
    for(x=0;x<count;x++)
    {
        puts("nevermore!");

    }

}
