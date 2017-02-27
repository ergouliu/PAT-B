#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int N;
    double a,b;
    cin>>N;
    double c=0.001,spectral_radius=0;
    for(int i=0;i<N;i++)
    {
        cin>>a>>b;
        c=double(sqrt(a*a+b*b));
        if(spectral_radius<c)
        {
            spectral_radius=c;
        }

    }

    printf("%.2f\n",int(spectral_radius*100+0.5)/100.0);
    return 0;
}
