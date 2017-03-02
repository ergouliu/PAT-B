#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int a[26]={0};
    int max=0,temp=0;
    for(string::size_type index=0;index!=s.size();index++)
    {
        if(s[index]>='a'&&s[index]<='z')
        {
            a[s[index]-'a']++;
        }
        else if(s[index]>='A'&&s[index]<='Z')
        {
            a[s[index]-'A']++;
        }
    }
    for(int i=sizeof(a)/sizeof(a[0])-1;i>=0;i--)
    {
        if(max<=a[i])
        {
            max=a[i];
            temp=i;

        }
    }
    if(temp>=0&&temp<=25)
    {
        cout<<char(temp+'a')<<' '<<max<<endl; //char(temp+'a')将十进制数转化成ascii表中的字符；
    }
    return 0;
}
