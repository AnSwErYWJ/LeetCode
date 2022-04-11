#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

bool isUgly(int num)
{
    if(num > 0)
    {
        while(num % 2 == 0)
            num /= 2;
        while(num % 3 == 0)
            num /= 3;
        while(num % 5 == 0)
            num /= 5;
    }

    if(num == 1)
        return true;
    else
        return false;
}

int main(void)
{
    int num;

    printf("Please input the number:");
    scanf("%d",&num);

    if(isUgly(num))
        printf("%d is an ugly number.\n",num);
    else
        printf("%d is not an ugly number.\n",num);

    return 0;
}
