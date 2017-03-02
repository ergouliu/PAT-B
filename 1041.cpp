#include <iostream>

using namespace std;

struct student
{
    char s[15];
    int  shijizhuo;
    int kaoshizhuo;
} ;

int main()
{
    struct student stu[1000];
    int N;
    cin>>N;
    int M;
    int a;
    for(int i=0;i<N;i++)
    {
        cin>>stu[i].s>>stu[i].shijizhuo>>stu[i].kaoshizhuo;
    }
    cin>>M;
    for(int i=0;i<M;i++)
    {
        cin>>a;
        for(int i=0;i<N;i++)
        {
            if(a==stu[i].shijizhuo)
            {
                cout<<stu[i].s<<' '<<stu[i].kaoshizhuo<<endl;
            }

        }
    }

    return 0;
}
