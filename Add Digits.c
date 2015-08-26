#include<stdio.h>

int addDigits(int num)
{
    int tmp;

    while(1)
    {
        if(num < 10)
            return num;

        tmp = num;
        num = 0;
        while(tmp)
        {
            num += tmp % 10;
            tmp /= 10;
        }
    }
}

int main(void)
{
    int num=38;

    printf("%d",addDigits(num));

    return 0;
}
