#include<stdio.h>
#include<string.h>
#include<assert.h>

int lengthOfLastWord(char *s)
{
    int count = 0,i;
    int len = strlen(s);

    while(s[len-1] == ' ')
        len--;

    for(i=len-1;i>=0;i--)
    {
        if(s[i] != ' ')
            count++;
        else
            break;
    }

    return count;
}

int main(void)
{
    char *s="Hello world  ";

    printf("%d\n",lengthOfLastWord(s));

    return 0;
}
