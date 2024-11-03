#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
        if(a[i]%3==0 && a[i]%2!=0)
        {
            cnt++;
        }
    }
    printf("%d %d",count,cnt);
    return 0;
}