#include <stdio.h>

int main() 
{
    int s;
    scanf("%d",&s);
    while (s--) 
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int new_time = (M1 * D) / (M1 + M2);
        int days_saved = D - new_time;
        printf("%d\n", days_saved);
    }
    return 0;
}


