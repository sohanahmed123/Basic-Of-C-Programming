#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001],T[1001];
    scanf("%s %s",S,T);
    int aa=strlen(S);
    int bb=strlen(T);
    printf("%d %d\n",aa,bb);
    printf("%s %s",S,T);
    return 0;
}