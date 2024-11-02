#include<stdio.h>
void fun(char ar[])
{
    // int sz=sizeof(ar)/sizeof(char);
    // printf("%d\n",sz);
    int len=strlen(ar);
    // printf("%d\n",len);
    for(int i=0;i<len;i++)
    {
        printf("%c",ar[i]);
    }
}
int main()
{
    char ar[20]={"Hello"};
    fun(ar);
    // int sz=sizeof(ar)/sizeof(char);
    // printf("%d\n",sz);
    // int len=strlen(ar);
    // printf("%d\n",len);
    return 0;
}