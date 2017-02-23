#include <iostream>
#include <malloc.h>

using namespace std;
int max(int a,int b,int c)
{
    int max;
        if (a>b)
            max=a;
        else
            max=b;
    if(max<c)
        max=c;
    return max;
}
int main()
{
    int times;
    int WonA=0,DrawA=0,LoseA=0;
    int WonB=0,DrawB=0,LoseB=0;
    int countAC=0,countAJ=0,countAB=0;
    int countBC=0,countBJ=0,countBB=0;
    int maxA,maxB;
    cin>>times;
    char* M=new char[times];    //c++方式；
    char* N=(char*) malloc(sizeof(char)*times);  //c方式；
    for(int i=0;i<times;i++)
    {
        cin>>M[i]>>N[i];
    }
    for(int i=0;i<times;i++)
    {
        if((M[i]=='C'&&N[i]=='J')||(M[i]=='J'&&N[i]=='B')||(M[i]=='B'&&N[i]=='C'))
        {
            WonA++;
            LoseB++;
            if(M[i]=='C')
            {
                countAC++;
            }
            else if(M[i]=='J')
            {
                countAJ++;
            }
            else
            {
                countAB++;
            }

        }
        else if((M[i]=='C'&&N[i]=='C')||(M[i]=='J'&&N[i]=='J')||(M[i]=='B'&&N[i]=='B'))
        {
            DrawA++;
            DrawB++;
        }
        else
        {
            LoseA++;
            WonB++;
            if(N[i]=='C')
            {
                countBC++;
            }
            else if(N[i]=='J')
            {
                countBJ++;
            }
            else
            {
                countBB++;
            }
        }

    }

    cout<<WonA<<' '<<DrawA<<' '<<LoseA<<endl;
    cout<<WonB<<' '<<DrawB<<' '<<LoseB<<endl;
    maxA=max(countAC,countAJ,countAB);
    maxB=max(countBC,countBJ,countBB);
    if(maxA==countAB)
    {
        cout<<'B'<<' ';
    }
    else if(maxA==countAC)
    {
        cout<<'C'<<' ';
    }
    else
    {
        cout<<'J'<<' ';
    }

    if(maxB==countBB)
    {
        cout<<'B'<<endl;
    }
    else if(maxB==countBC)
    {
        cout<<'C'<<endl;
    }
    else
    {
        cout<<'J'<<endl;
    }

    delete [] M;
    free(N);
    return 0;
}
