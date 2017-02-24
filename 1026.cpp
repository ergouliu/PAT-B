#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int C1,C2;
    int runtime;
    cin>>C1>>C2;
    runtime=int((C2-C1)/100.0+0.5);
    cout<<setfill('0')<<setw(2)<<runtime/3600<<':'<<setfill('0')<<setw(2)
        <<runtime/60%60<<':'<<setfill('0')<<setw(2)<<runtime%3600%60<<endl;  //用setfill(),setw()控制输出格式；

    return 0;
}
