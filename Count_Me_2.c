#include<stdio.h>
#include<string.h>
int main()
{
    char c[100001];
    scanf("%s",c);
    int length=strlen(c);
    int count=0;
    for(int i=0;i<length;i++)
    {
         if (c[i] >= 'a' && c[i] <= 'z') 
        { 
            if (c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u') 
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}