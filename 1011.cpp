#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  unsigned int t;
  double a,b,c;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>a>>b>>c;
    if(a+b>c)
    {
      printf("Case #%d: true\n", i + 1);
    }
    else
    {
      printf("Case #%d: false\n", i + 1);
    }

  }
  return 0;

}
