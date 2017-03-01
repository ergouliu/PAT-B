#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  int N,*p,A1=0,A2=0,A3=0,sum=0,A5=0;
  int flag=-1;
  bool flagA2=false;
  float A4,countA4=0;
  cin>>N;
  p=(int *)malloc(sizeof(int)*N);
  // *p=new int[N];
  for(int i=0;i<N;i++)
  {
    cin>>p[i];
    if(p[i]%5==0&&p[i]%2==0)
    {
      A1+=p[i];
    }
    else if(p[i]%5==1)
    {
      flagA2=true;
      flag*=-1;
        A2+=flag*p[i];
    }
    else if(p[i]%5==2)
    {
        A3++;
    }
    else if(p[i]%5==3)
    {
        sum+=p[i];
        countA4++;
    }
    else if(p[i]%5==4)
    {
        if(A5<p[i])
      {
          A5=p[i];
      }

    }
  }
  if(A1==0)
  {
    cout<<'N'<<' ';
  }
  else
  {
    cout<<A1<<' ';
  }
  if(!flagA2)
  {
    cout<<'N'<<' ';
  }
  else
  {
    cout<<A2<<' ';
  }
  if(A3==0)
  {
    cout<<'N'<<' ';
  }
  else
  {
    cout<<A3<<' ';
  }

  if(countA4==0)
  {
    cout<<'N'<<' ';
  }
  else
  {
    A4= (int)((sum*1.0)/countA4*10+0.5)/10.0;
    cout<<A4<<' ';
  }
  if(A5==0)
  {
    cout<<'N';
  }
  else
  {
    cout<<A5;
  }
  free(p);
  return 0;
}
