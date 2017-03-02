#include <iostream>
#include <string>
#include <cctype>
#include <stack>
#include <stdio.h>
#include  <vector>

using namespace std;

int main()
{
    int N,i=0,temp=0;
    string s[25]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec",
                    "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    string m[100];

    stack<int> stk,stk2;
    cin>>N;
    getchar(); //fflush(stdin);
    while(i!=N)
    {
        getline(cin,m[i]);
        i++;
    }
    for(int j=0;j<N;j++)
    {


    for(int i=0;i<m[j].size();i++)
        {


            if(isdigit(m[j][i]))  //isdigit 用来判断单个字符是不是数字，而不是用来判断整个字符串；
            {
                temp=temp*10+m[j][i]-'0';
                if(temp==0)
                cout<<s[0]<<endl;
            }
        }
        while(temp!=0)
        {
            stk.push(temp%13);
            temp/=13;
        }

        while(!stk.empty())
        {
            if(stk.size()==2)
            {
              int temp1=stk.top();
                  stk.pop();
                if(stk.top()==0)
                cout<<s[12+temp1]<<endl;
                else
                cout<<s[12+temp1]<<' ';

            }

            if(stk.size()==1&&stk.top()!=0)
            {
               cout<<s[stk.top()]<<endl;
            }
            stk.pop();
        }

        if(!isdigit(m[j][0]))
            {
                int sum=0;
               for(int i=0;i<25;i++)
                {

                    if(m[j].find(s[i])>=0&&m[j].find(s[i])<m[j].size())
                    {
                        stk2.push(i);
                        if(i>=13)
                        {
                            sum+=(stk2.top()-12)*13;
                        }
                        else
                        {
                           sum+=stk2.top();
                        }
                    }
                }

            cout<<sum<<endl;
            }

    }
    return 0;
}
