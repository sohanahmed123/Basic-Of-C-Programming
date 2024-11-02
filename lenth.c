#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int len=strlen(a);
    // int count=0;
    // int i=0;
    // while( a[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }
    // for(int i=0;a[i]!='\0';i++)
    // {
    //      count++;
    // }
    printf("%d\n",len);
    return 0;
}