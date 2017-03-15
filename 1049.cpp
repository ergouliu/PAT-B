#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    vector<double> vec;
 //   float vec[100000];
    double m;
    double sum=0;
    float temp;
    cin>>N;
//    for(int i=0;i<N;i++)
//    {
//        cin>>vec[i];
//    }

    for(int i=0;i<N;i++)
    {
        cin>>m;
        vec.push_back(m);
        sum+=vec[i]*(i+1)*(N-i);

    }

//    for(int i=0;i<N;i++)
//    {
//        temp=vec[i];
//        sum+=temp;
//        for(int j=i+1;j<N;j++)
//        {
//            temp+=vec[j];
//            sum+=temp;
//
//        }
//
//    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}
