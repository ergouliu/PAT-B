#include <stdio.h>

struct team
{
    int num;
    int player;
    int score;
};

int main()
{
    int N;
    int i;
   struct team tm;
   int a[1001]={0};
    scanf("%d",&N);
    int chanum;
    for(i=0;i<N;i++)
    {
        scanf("%d-%d ",&tm.num,&tm.player);
        scanf("%d",&tm.score);
        a[tm.num]+=tm.score;
    }
    int max=a[0];
    for(unsigned i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(max<a[i])
           {
               chanum=i;
                max=a[i];
           }
    }
    printf("%d %d",chanum,max);

    return 0;
}
