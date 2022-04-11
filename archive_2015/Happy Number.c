#include<stdio.h>

typedef int bool;
#define true 1
#define false 0

bool isHappy(int n)
{
    int sum = 0,k = 0,num,times = 0;

    num = n;
    while(num != 1 && times < 100)
    {
            while(num)
            {
                k = num % 10;
                sum += k * k;
                num /= 10;
            }
            num =sum;
            sum = 0;
            times++;
    }

    if(num == 1)
        return true;
    else
        return false;
}

int main(void)
{
    int n = 19;

    if(isHappy((n)))
        printf("%d is a happy number",n);
    else
        printf("%d is not a happy number",n);

    return 0;
}
