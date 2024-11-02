#include<stdio.h>
int main()
{
    int cor;
    while(scanf("%d",&cor) != EOF)
    {
        if(cor==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
    return 0;
}