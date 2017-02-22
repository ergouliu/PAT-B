#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int temp=n;
    while(temp!=0)
    {
        temp/=10;
        count++;
    }
    temp=n;
    if(count==1)
    {
        for(int i=1;i<=n;i++)
        cout<<i;
    }
    else if(count==2)
    {
        for(int i=0;i<n/10;i++)
            cout<<'S';
        for(int i=1;i<=n%10;i++)
            cout<<i;
    }
    if(count==3)
    {
        for(int i=0;i<n/100;i++)
            cout<<'B';
        for(int i=0;i<n/10%10;i++)
            cout<<'S';
        for(int i=1;i<=n%10;i++)
            cout<<i;
    }
    return 0;
}
