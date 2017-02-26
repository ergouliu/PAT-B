#include <iostream>
#include <math.h>
using namespace std;


int isPrime(int n)
{
  int flag=1;
    if(n==1)
      return 0;
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
    return 0;
    }
  }
  return 1;
}
int main()
{
  long int n;
  int count=0;
  cin>>n;
  for(int i=3;i<=n;i++)
  {
    if(isPrime(i-2)&&isPrime(i))
    {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
