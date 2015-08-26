#include<stdio.h>
#include<string.h>
#include<assert.h>

int titleToNumber(char* s) 
{
  assert(s);
  
  int i;
  int num=0;
  
  for(i=0;i<strlen(s);i++)
  {
      num=num*26+s[i]-'A'+1;
  }
  return num;
}

int main(void)
{
  char *s = "AA";
  
  printf("%d\n",titleToNumber(s));
  
  return 0;
}
