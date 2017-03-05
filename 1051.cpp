#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double R1,P1,R2,P2;
    cin>>R1>>P1>>R2>>P2;
    double a=R1*R2*cos(P1+P2);
    double b=R1*R2*sin(P1+P2);
    if(fabs(a)<0.01)
    {
        cout<<fixed<<setprecision(2)<<0.00;

    }
    else
    {
        cout<<fixed<<setprecision(2)<<a;
    }
    if(fabs(b)<0.01)
    {
        cout<<'+'<<fixed<<setprecision(2)<<0.00<<'i'<<endl;
    }
    else if(fabs(b)>0.01&&b<0)
    {
        cout<<fixed<<setprecision(2)<<b<<'i'<<endl;
    }
    else
    {
        cout<<'+'<<fixed<<setprecision(2)<<b<<'i'<<endl;
    }
    return 0;
}
