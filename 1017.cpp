#include <iostream>
#include <cstring>

using namespace std;

//����һ��
int main()
{
    char a[1001];
    int m;
    cin>>a>>m;
    int n;
     int temp=0;
    for(unsigned int i=0;i!=strlen(a);i++)
    {
        n=a[i]-'0' + temp*10;
        if(strlen(a)==1)
        {
            cout<<n/m;
            continue;
        }
        else if(i==0&&n/m==0)
        {

                    temp = n%m;
                    continue;

        }
        cout<<n/m;
        temp = n%m;

        //        a[i+1]=(n%m*10+(a[i+1]-'0'))+'0';
        //��Ҫ��forѭ������дi+1�������������Խ�磻
    }


    cout<<' ';
    cout<<n%m<<endl;
    return 0;
}

//��������
//int main()
//{
//    char a[1001];
//    int m;
//    cin>>a>>m;
//    int n;
//     int temp=0;
//    for(unsigned int i=0;i!=strlen(a);i++)
//    {
//        n=a[i]-'0'+temp*10;
//        if(n<m&&i==0)
//        {
//            if(strlen(a)==1)
//            {
//                cout<<n/m;
//            }
//            else
//            {
//                temp=n%m;
//                continue;
//            }
//        }
//        else
//        {
//            cout<<n/m;
//            temp=n%m;
//        }
//
//
//
//    }
//    cout<<' ';
//    cout<<n%m<<endl;
//    return 0;
//}

