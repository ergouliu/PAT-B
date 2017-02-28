#include <iostream>
#include<stdlib.h>
using namespace std;
int ArrayNumberMove(int p[],int N)
{
  int endnum=p[N-1];
  for(int i=N-1;i>0;i--)
  {
    p[i]=p[i-1];
  }
  p[0]=endnum;

}

int main()
{
  int M,N;
  int *p;
  int i,temp;
  cin>>N>>M;
  p=(int*)malloc(sizeof(int)*N);
  for(i=0;i<N;i++)
  {
    cin>>p[i];
  }
  for(i=0;i<M;i++)
  {
    ArrayNumberMove(p,N);

  }
  for(int i=0;i<N;i++)
  {
    if(i!=N-1)
    {
      cout<<p[i]<<' ';
    }
    else
    {
      cout<<p[i];
    }
  }


    free(p);

  return 0;

 }
