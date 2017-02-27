#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> vec,vec1;
    stack<int> stk;
    int m;
    int a[37]={0};
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>m;
        vec.push_back(m);

    }
    for(vector<int>::size_type index=0;index!=vec.size();index++)
    {

        int sum=0;
        while(vec[index]!=0)
        {
            stk.push(vec[index]%10);
            vec[index]/=10;
        }
        while(!stk.empty())
        {
            sum+=stk.top();
            stk.pop();

        }
        a[sum]++;

    }
    for(int i=0;i<37;i++)
    {
        if(a[i]>0)
        {
            count++;

        }
    }
    cout<<count<<endl;
    for(int i=0;i<37;i++)
    {
        if(a[i]>0)
        {
            vec1.push_back(i);

        }
    }
    for(int i=0;i<vec1.size();i++)
    {
        if(i==vec1.size()-1)
        {
            cout<<vec1[i]<<endl;
        }
        else
        {
            cout<<vec1[i]<<' ';
        }
    }

    return 0;
}
