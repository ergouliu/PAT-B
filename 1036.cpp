#include <iostream>

using namespace std;

int main()
{
    int N;
    char c;
    cin>>N>>c;
    for(int i=0;i<int(N*0.5+0.5);i++)
    {
        if(i==0||i==int(N*0.5+0.5)-1)

        {
            for(int j=0;j<N;j++)
            {
                cout<<c;
            }
            cout<<endl;
        }
        else
        {
            cout<<c;
            for(int j=0;j<N-2;j++)
            {
                cout<<' ';
            }
            cout<<c;
            cout<<endl;
        }

    }


    return 0;
}
