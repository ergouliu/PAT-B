#include <stdio.h>

int GCD(int a,int b)
{
    int temp;
    while(b)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int LCM(int a,int b)
{
    return a*b/GCD(a,b);
}

int main()
{
    int N1,M1,N2,M2,K;
    int LCM3;
    int i;
    int count=0,count2=0;
    scanf("%d/%d %d/%d %d",&N1,&M1,&N2,&M2,&K);
    LCM3=LCM(K,LCM(M1,M2));
    if(LCM3*N1/M1<=LCM3*N2/M2)
    {
        for(i=(LCM3*N1/M1+1);i<LCM3*N2/M2;i++)
        {
            if(GCD(i,LCM3)==LCM3/K)
            {
                count++;
            }
        }
        for(i=(LCM3*N1/M1+1);i<LCM3*N2/M2;i++)
        {
            if(GCD(i,LCM3)==LCM3/K)
            {
                count2++;
            }
            if(GCD(i,LCM3)==LCM3/K&&count2==count)
            {
                printf("%d/%d",i/(LCM3/K),K);
            }
            else if(GCD(i,LCM3)==LCM3/K)
            {
                printf("%d/%d ",i/(LCM3/K),K);
            }
        }
    }
    else
    {
        for(i=(LCM3*N2/M2+1);i<LCM3*N1/M1;i++)
        {
            if(GCD(i,LCM3)==LCM3/K)
            {
                count++;
            }
        }
        for(i=(LCM3*N2/M2+1);i<LCM3*N1/M1;i++)
        {
            if(GCD(i,LCM3)==LCM3/K)
            {
                count2++;
            }
            if(GCD(i,LCM3)==LCM3/K&&count2==count)
            {
                printf("%d/%d",i/(LCM3/K),K);
            }
            else if(GCD(i,LCM3)==LCM3/K)
            {
                printf("%d/%d ",i/(LCM3/K),K);
            }
        }
    }

    return 0;
}
