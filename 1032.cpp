#include <iostream>

using namespace std;

int main()
{
    int N;
    int* p;
    cin>>N;
    p=new int[N]{0};
    int max=0;
    int max_i=0;
    int temp;
    int num,score;
    for(int i=0;i<N;i++)
    {
        cin>>num>>score;
        temp=num;
        p[temp]+=score;
        if(max<p[temp])
        {
            max=p[temp];
            max_i=temp;
        }
    }
    cout<<max_i<<' '<<max<<endl;
    delete [] p;
    return 0;
}
