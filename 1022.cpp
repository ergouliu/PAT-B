#include <iostream>
#include <stack>

using namespace std;

int main()
{
    unsigned int A,B,D;
    unsigned int sum=0;
    stack<int> stk;
    cin>>A>>B>>D;
    sum=A+B;
    if(sum==0)
    {
        cout<<sum;
    }
    while(sum!=0)
    {
        stk.push(sum%D);
        sum/=D;
    }
    while(!stk.empty())
    {
        cout<<stk.top();
        stk.pop();

    }
    return 0;
}
