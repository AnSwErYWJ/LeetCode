#include<stdio.h>

int singleNumber(int* nums, int numsSize)
{
    int n=nums[0],i;

    for(i=1; i<numsSize; i++)
        n ^= nums[i];

    return n;
}

int main(void)
{
    int nums[] = {1};
    int size = sizeof(nums)/sizeof(int);
    printf("%d",size);

    printf("%d\n",singleNumber(nums,size));

    return 0;
}
