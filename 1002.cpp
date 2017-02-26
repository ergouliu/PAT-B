#include <iostream>
#include <stdio.h>
#include <stack>
#include <string.h>
using namespace std;

int main()
{
  char n[101];
  memset(n,0,sizeof(n));
  int sum=0;
  string  s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  stack<int> nums;
  gets(n);
  if(n[0]-'0'==0)
  {
    nums.push(0);

  }
  for (int i=0;i<sizeof(n);i++)
  {
    if(n[i]!=0)
    sum+=n[i]-'0';
  }

  while(sum!=0)
  {
      nums.push(sum%10);
      sum/=10;

  }
  while(!nums.empty())
  {

    if(nums.size()==1)
    cout<<s[nums.top()];
    else
    cout<<s[nums.top()]<<' ';
    nums.pop();
  }
  return 0;

}
