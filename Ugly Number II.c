#include <stdio.h>
#include <stdlib.h>

int Min(int a,int b,int c)
{
    int min;

    min = a<b?a:b;
    min = min<c?min:c;

    return min;
}

int nthUglyNumber(int n)
{
    int *num = (int *)malloc(n * sizeof(int));
    if(num == NULL)
    {
        fprintf(stderr,"malloc failed!");
        exit(1);
    }

    num[0] = 1;
    int i = 0,j = 0,k = 0;
    int index = 1;
    int val,result;

    while(index < n)
    {
        val = Min(num[i]*2,num[j]*3,num[k]*5);//竞争下一位丑数
        if(val == num[i]*2)
            i++;
        if(val == num[j]*3)
            j++;
        if(val == num[k]*5)
            k++;
        num[index++] = val;
    }

    result = num[n-1];
    free(num);
    num=NULL;

    return result;
}

int main(void)
{
    int n;

    printf("Please input the number:");
    scanf("%d",&n);

    printf("n-th number is %d.\n",nthUglyNumber(n));

    return 0;
}
