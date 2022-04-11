#include<stdio.h>
#include<inttypes.h>

int hammingWeight(uint32_t n)
{
    int count = 0;

    while(n)
    {
        n = n & (n-1); //每次干掉最后一位1
        count++;
    }

    return count;
}

int main(void)
{
    uint32_t n = 11;

    printf("The number of 1 bits in %d is %d",n,hammingWeight(n));

    return 0;
}
