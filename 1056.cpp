#include <iostream>

using namespace std;

int main()
{
    int N;
    int a[10];
    cin>>N;
    int temp,sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<N;i++)
    {
        temp=a[i];
        for(int j=i+1;j<N;j++)
        {
            if(temp!=a[j])
            {
                sum+=a[j]*10+temp;
                sum+=temp*10+a[j];
            }
            else
            {
                sum+=a[j]*10+a[j];
            }
        }

    }
    cout << sum << endl;
    return 0;
}
