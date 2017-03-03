#include <iostream>
#include <algorithm>
using namespace std;

bool cmp( int a,int b)
{
     return  a > b;
}

int main()
{
    int N;
    cin>>N;
    int* p=new int[N];
    for(int i=0;i<N;i++)
    {
        cin>>p[i];
    }
    sort(p,p+N,cmp);
    for(int i=0;i<N;i++)
    {
        if(p[i]-1<=i+1)
        {
            cout<<p[i]-1<<endl;
            break;
        }


    }


    return 0;
}
