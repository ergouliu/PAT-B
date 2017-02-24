#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int flag;

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]>0&&i!=0)
        {
            cout<<i;
            flag=i;
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(i!=flag)
        {
            while(a[i]>0)
              {
                cout<<i;
                a[i]--;
              }
        }
        else
        {
            while(a[i]>1)
              {
                cout<<i;
                a[i]--;
              }
        }

    }
    return 0;
}
