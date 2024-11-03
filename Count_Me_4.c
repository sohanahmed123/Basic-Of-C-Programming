#include <stdio.h>
#include <string.h>
int main()
{
    char S[10001];
    scanf("%s",S);
    int count[26]={0};
    for(int i=0;i<strlen(S);i++)
    {
        char c=S[i];
        if(c>='a' && c<='z')
        {
            count[c-'a']++;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            printf("%c - %d\n", 'a' + i,count[i]);
        }
    }
    return 0;
}