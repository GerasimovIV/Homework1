# Homework1
#include <stdio.h>
#include <stdlib.h>
bool F(n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 0)
    {
        return false;
    }
    for (i=2; i<= n/2; i++)
    {
        d = n/i;
        if (d*i == n)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int n;
    scanf("%d", n);
    bool h;
    h = F(n);
    if (h ==false)
    {
        printf("Не простое");
    }
    if (h == true)
    {
        printf("Простое");
    }
    return 0;
}
