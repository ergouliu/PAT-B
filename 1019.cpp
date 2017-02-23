#include <iostream>
#include <cstdio>
int ReverseDigit(int N)
{
    int bits=0;
    int temp;
    int RDigit=0;
    temp=N;
    while(temp!=0)
    {
        bits++;
        temp/=10;
    }
    for(int i=0;i<bits;i++)
    {
        RDigit=RDigit*10+N%10;
        N/=10;

    }
    return RDigit;
}


int  sort(int N)
{
   int a[4];
   int digit=0;
   for(int i=0;i<4;i++)
   {
        a[i]=N%10;
        N/=10;
   }
   for(int i=0;i<4;i++)
   {
        for(int j=i+1;j<4;j++)
        {
            if(a[j]>a[i])
            {
                int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        }
   }
   for(int i=0;i<4;i++)
   {
        digit=digit*10+a[i];
   }
   return digit;
}

using namespace std;

int main()
{
    int digit,RDigit,N;
    cin>>N;
    digit=sort(N);
    RDigit=ReverseDigit(digit);
//    cout<<digit<<' '<<RDigit;
    if(digit==RDigit)
    {
        printf("%04d - %04d = %04d\n",digit,RDigit,digit-RDigit);
    }
    else
    {

        while(digit-RDigit!=6174)
        {
            printf("%04d - %04d = %04d\n",digit,RDigit,digit-RDigit);
            digit=sort(digit-RDigit);
            RDigit=ReverseDigit(digit);
        }
            printf("%04d - %04d = %04d\n",digit,RDigit,digit-RDigit);
    }

    return 0;
}
