#include <iostream>

using namespace std;

int main()
{
    int a[102][100];
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N+2;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=2;i<N+2;i++)
    {
        int sum=0;
        for(int j=0;j<M;j++)
        {
            if(a[i][j]==a[1][j])
               sum+=a[0][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
