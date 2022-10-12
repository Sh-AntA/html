#include<stdio.h>
int main()
{
    int num[]={3,4,5,6,7,8};
    int i,sum=0;
    for(i=0;i<=5;i++)
    {
        sum=sum+num[i];
    }
    printf(" the sum is:%d",sum);
    return 0;
}
