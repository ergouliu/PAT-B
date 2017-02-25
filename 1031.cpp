#include <iostream>

using namespace std;

int main()
{
    char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    string s;
    int N;
    int temp=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>s;
        int sum=0;
        int flag=0;

        for(int j=0;j<s.size()-1;j++)
        {
            if(!isdigit(s[j]))
            {
                cout<<s<<endl;
                temp+=1;
                break;
            }

            else if(s[j]>='0'&&s[j]<='9')
            {
                sum+=(s[j]-'0')*weight[j];
                flag+=1;              //flag用来检查17位是不是全是数字；
            }

        }
        if(M[sum%11]!=s[17]&&flag==17)
           {
                cout<<s<<endl;
                temp+=1;
           }

    }
    if(temp==0)
        cout<<"All passed"<<endl;
    return 0;
}
