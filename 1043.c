#include <stdio.h>
#include <string.h>

int  replace(char c)
{
    int i;
    switch(c)
    {
        case 'P':i=1;break;
        case 'A':i=2;break;
        case 'T':i=3;break;
        case 'e':i=4;break;
        case 's':i=5;break;
        case 't':i=6;break;
        default :i=0;
    }
    return i;
}

char  rreplace(int i)
{
    int c;
    switch(i)
    {
        case 1:c='P';break;
        case 2:c='A';break;
        case 3:c='T';break;
        case 4:c='e';break;
        case 5:c='s';break;
        case 6:c='t';break;
    }
    return c;
}

int main()
{
    char c[10000];
    scanf("%s",c);
    int a[7]={0};
    int i,max;
    for(i=0;i<strlen(c);i++)
    {
        if(replace(c[i]))
        {
            a[replace(c[i])]++;
        }
    }
    max=a[1];
    for(i=1;i<7;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    while(max!=0)
    {
        for(i=1;i<7;i++)
        {
            if(a[i]!=0)
            {
                printf("%c",rreplace(i));
                a[i]--;
            }


        }
        max--;
    }

        return 0;
}
