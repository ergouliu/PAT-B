#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;
    s3=s1;
    int count=0;
    for(unsigned int i=0;i<s2.size();i++)
    {
        if(s3.find(s2[i])>=0&&s3.find(s2[i])<s1.size())
        {
            int pos=s3.find(s2[i]);
            s3.erase(pos,1);
            continue;
        }
        else
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Yes"<<" "<<s1.size()-s2.size()<<endl;
    }
    else
    {
        cout<<"No"<<" "<<count<<endl;
    }
    return 0;
}
