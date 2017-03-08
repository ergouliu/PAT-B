#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price[3]={0};
    int pay[3]={0};
    int charge=0;
    scanf("%d.%d.%d",&price[0],&price[1],&price[2]);
    scanf("%d.%d.%d",&pay[0],&pay[1],&pay[2]);
    charge=pay[0]*17*29+pay[1]*29+pay[2]-(price[0]*17*29+price[1]*29+price[2]);
    if(charge>=0)
    {
        printf("%d.%d.%d",charge/17/29,charge/29%17,charge%(17*29)%29);
    }
    else
    {
        charge=-charge;
        printf("-%d.%d.%d",charge/17/29,charge/29%17,charge%(17*29)%29);
    }
    return 0;
}
