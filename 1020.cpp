#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<algorithm>
using namespace std;

typedef struct
{
    double a;
    double b;
    double c;

} mooncake;
/*qsort��cmp��������Ĭ��Ϊ��const void *p,const void *q���������Ͳ��ܸı䡣
�ڸ�ֵ֮ǰҪ��ָ�����ǿ������ת����*/
int compare (const void*  a, const void*  b)
{
//    mooncake aa = *(mooncake*)a;
//    mooncake bb = *(mooncake*)b;
  return (*(mooncake*)a).c < (*(mooncake*)b).c;
}

int main()
{
    int N,demand;
    mooncake mon[1000];
    cin>>N>>demand;
    double sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>mon[i].a;
    }
    for(int i=0;i<N;i++)
    {
        cin>>mon[i].b;
        mon[i].c=(mon[i].b)/(mon[i].a);
    }
    qsort(mon,N,sizeof(mon[0]),compare);
    for(int i=0;i<N;i++)
    {
        if(demand>=mon[i].a)
        {
            sum+=mon[i].b;
            demand-=mon[i].a;
        }
        else if(demand<mon[i].a)
        {
            sum+=demand*mon[i].c;
            break;
        }
    }
    printf("%.2f\n",sum);

    return 0;
}
