#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    string s;
    getline(cin,s); //getline ֻ��������ȡstring���͵ı�����
  //  char s[100000];
 // gets(s);     //C����������ո���ַ�����ͷ�ļ�#include <stdio.h>
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
