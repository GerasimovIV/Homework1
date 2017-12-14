#include <stdio.h>
#include <stdlib.h>
int F(int n)
{
    if ((n == 1) || (n == 2))
    {
        return 1;
    }
    return F(n-1)+F(n-2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int i = 1;
    /*for (i = 1; i <= n; i ++)
    {
        printf("%d\n", F(i));
    }*/
    printf("%d\n", F(n));
    return 0;
}
