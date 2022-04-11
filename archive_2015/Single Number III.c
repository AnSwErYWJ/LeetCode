#include<stdio.h>
#include<stdlib.h>

int *singleNumber(int *nums, int numsSize, int *returnSize)
{
    int *ret = (int *)malloc((*returnSize)*sizeof(int));
    if(ret == NULL)
    {
        fprintf(stderr,"malloc failed\n");
        exit(1);
    }

    int i,xor = nums[0],mask = 0;
    for(i=1;i<numsSize;i++)
        xor ^= nums[i];

    mask = xor&(~(xor-1));

    int a = 0,b = 0;
    for(i=0;i<numsSize;i++)
    {
        if((mask & nums[i]) == 0)
            a ^= nums[i];
        else
            b ^= nums[i];
    }

    ret[0] = a;
    ret[1] = b;

    return ret;
}

int main(void)
{
    int rsize = 2;
    int nums[] = {-1,0};
    int size = sizeof(nums)/sizeof(int);
    int *returnsize;
    returnsize = &rsize;

    int *a = singleNumber(nums,size,returnsize);

    printf("(%d,%d)\n",a[0],a[1]);



    return 0;
}
