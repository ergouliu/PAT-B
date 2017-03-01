#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int N)
{

    if(N<2)
    {
         throw 0;
    }
    for(int i=2;i<=sqrt(N);i++)
    {
        if(N%i==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int N,M;
    cin>>N>>M;
    int i=2;
    int count=0;
    int cnt=0;
    while(count<M)
    {

        if(isPrime(i))
        {
            count++;
        }
        if(count>=N&&isPrime(i))
        {
            cnt++;
            if(cnt%10==0||cnt==(M-N+1))
            {
                cout<<i;
                cout<<endl;
            }
            else
            {
                cout<<i<<" ";
            }
        }
        i++;
    }
    return 0;
}
