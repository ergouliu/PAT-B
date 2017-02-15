#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[10],b[10];
    char m,n;
    int count_a=0;
    int count_b=0;
    int result_a=0;
    int result_b=0;
    int tmp;

    cin>>a>>m>>b>>n;
    for(int i=0;i<strlen(a);i++)
        if(a[i]==m)
            count_a++;
    for(int i=0;i<strlen(b);i++)
        if(b[i]==n)
            count_b++;

    tmp=m-'0';
    for(int i=0;i<count_a-1;i++)
         result_a=(result_a+tmp)*10;
    if(count_a!=0)
        result_a+=tmp;

    tmp=n-'0';
    for(int i=0;i<count_b-1;i++)
         result_b=(result_b+tmp)*10;
    if(count_b!=0)
        result_b+=tmp;

    cout<<result_a+result_b<<endl;

    return 0;
}
