#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N,m=1;
    int sum=1;
    int temp1,temp2;
    char c;
    cin>>N>>c;
    do
    {
        m=(m+2);
        sum+=2*m;
    }while(sum<N);
    temp1=m-2;
    temp2=sum-2*m;
    int** p;
    p= new int*[temp1];
    int t=(temp1-1)/2;
    for(int i=0;i<temp1;i++)
    {
        for(int j=0;j<t-abs(i-t);j++)
            cout<<" ";
        for(int j=0;j<abs(i-t)*2+1;j++)
            cout<<c;
        cout<<endl;
    }
    cout<<N-temp2<<endl;

    for(int i=0;i<temp1;i++)
    {
        delete [] p[i];
    }
    delete p;

    return 0;
}
