#include <stdio.h>
#include <string.h>
int main()
{
  char c[1000];
  int i;
  int a[10]={0};
  scanf("%s",c);
//  gets(c);
  for(i=0;i<strlen(c);i++)
  {
    a[c[i]-'0']++;
  }
  for(i=0;i<10;i++)
  {
    if(a[i]!=0)
    {
      printf("%d:%d\n",i,a[i]);
    }
  }
  return 0;
}
