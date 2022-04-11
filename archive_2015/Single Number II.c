#include<stdio.h>

int singleNumber(int* nums, int numsSize)
{
    int i,j;
    int bits[32]={0};
    int n = 0;

    for(i=0;i<32;i++)
    {
        for(j=0;j<numsSize;j++)
        {
            bits[i] += (nums[j]>>i) & 1;
        }
        n |= (bits[i]%3) << i;
    }

    return n;
}

int main(void)
{
    int nums[] = {1};
    int size = sizeof(nums)/sizeof(int);

    printf("%d\n",singleNumber(nums,size));

    return 0;
}
