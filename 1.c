#include <stdio.h>
#define N 1000000
int a[N];
int n;
int count = 0;

int main(void)
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 1; j < n; j++)
    {
        if (a[j] > a[j-1] && a[j] > a[j+1])
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}