#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int N;
    int m[101]={0};
    int num;
    int a,b;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>b;
        m[b]++;
    }
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(i==num-1)
        {
            cout<<m[a];
        }
        else
        {
            cout<<m[a]<<' ';
        }
    }
    return 0;
}
