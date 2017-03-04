#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N,D;
    float e;
    int days;
    int count2=0,count3=0;
    cin>>N>>e>>D;
    for(int i=0;i<N;i++)
    {
        cin>>days;
        int count1=0;
        float* p=new float[days];
        for(int j=0;j<days;j++)
        {
            cin>>p[j];
            if(p[j]<e)
            {
                count1++;
            }
        }
        if(days>D&&count1>days/2.0)
        {
            count2++;
        }
        else if(count1>days/2.0)
        {
            count3++;
        }

        delete [] p;

    }

  printf("%.1f%% %.1f%%\n",count3*100.0/N,count2*100.0/N);

    return 0;
}
