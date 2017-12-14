

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fun(float x)
{
    return (tanf(x) - x);
}
int poisk_resh(float a, float b, float accuracey, float * x)
{
    if  ((fun(a) * fun(b)) == 0)
    {
        *x = 0;
        return 2;
    }
    int k = 1;
    float lenA_B = (b - a);
    if ((fun(a) * fun(b)) < 0)
    {

        b = b - (b - a)/2;
        if ((lenA_B/2) <= accuracey)
        {
            *x = b - lenA_B/2;
            return 2;
        }
        k = poisk_resh(a, b, accuracey, x);
        b = b + lenA_B/2;
    }


    if (k == 0)
    {
        a = a + (b - a)/2;
        if ((lenA_B/2) <= accuracey)
        {
            *x = a + lenA_B/2;
            return 2;
        }
        k = poisk_resh(a, b, accuracey, x);
        a = a - lenA_B/2;
    }
    if  ((fun(a) * fun(b)) > 0)
    {
        return 0;
    }
    return k;
}

int main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    float s = 2;
    float accuracey = 0.000001;
    int p = 0;
    p = poisk_resh(a, b, accuracey, &s);
    if (p == 0)
    {
        printf("there are no solutions on this interval\n");
    }
    else
    {
        printf("%lf\n", s);
    }
    return 0;
}
