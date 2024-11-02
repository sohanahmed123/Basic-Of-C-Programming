#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[7]={0};
    for (int i=0;i<n;i++)
    {
        int value=a[i];
        cnt[value]++;
    }
    //printf("0 - %d\n",cnt[0]);
    //printf("3 - %d\n",cnt[3]);
    for(int i=0;i<=6;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}