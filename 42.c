

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j;
    int mas[999][3];
    scanf("%d", &n);
    for (i = 1; i <=n ; i+=1)
    {
        scanf("%d %d", &mas[i-1][0], &mas[i-1][1]);
        mas[i-1][2] = 0;
    }

    for (i = 1; i <=n ; i+=1)
    {
        mas[i-1][2] = abs(mas[i-1][0] - mas[i-1][1]);
    }
    int k = 0;
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < n - i - 1 ; j++)
            {
                if((mas[j][2] < mas[j+1][2]) )
                    {
                        int tmp2 = mas[j][2];
                        mas[j][2] = mas[j+1][2] ;
                        mas[j+1][2] = tmp2;
                        int tmp0 = mas[j][0];
                        mas[j][0] = mas[j+1][0] ;
                        mas[j+1][0] = tmp0;
                        int tmp1 = mas[j][1];
                        mas[j][1] = mas[j+1][1] ;
                        mas[j+1][1] = tmp1;


                    }
            }
    }

    /*for (i = 0; i <=n-1 ; i+=1)
        {
            printf("mas :| %d %d %d |\n", mas[i][0], mas[i][1], mas[i][2]);
        }*/
    int itog[9999][2];
    int FLAG = 0;
    j = 0;
    for (i = 0; i <=n-1 ; i+=1)
    {
        if ((mas[i][0] <= FLAG) && (mas[i][1] >= FLAG))
        {
            itog[j][0] = mas[i][0];
            itog[j][1] = mas[i][1];
            if (itog [j][1] >= 10000)
            {
                j ++;
                break;
            }
            j ++;
            FLAG = mas[i][1];
        }
    }
    for (i = 0; i <=j-1 ; i+=1)
    {
        printf("! %d %d !\n", itog[i][0], itog[i][1]);
    }


    return 0;

}
