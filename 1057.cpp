#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    string s;
    getline(cin,s); //getline 只能用来读取string类型的变量；
  //  char s[100000];
 // gets(s);     //C语言输入带空格的字符串；头文件#include <stdio.h>
    int sum=0;
    int count0=0,count1=0;
    for(unsigned int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            sum+=s[i]-'a'+1;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            sum+=s[i]-'A'+1;
        }
    }
    while(sum!=0)
    {
        if(sum%2==0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
        sum/=2;
    }

    cout << count0<<' '<<count1 << endl;
    return 0;
}
