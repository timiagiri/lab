#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[4][4]={{1,12,13,49},{5,16,17,81},{9,10,11,20},{2,45,19,14}},i,j,k,l,m;
    for(i=0;i<4;i++)
    {
        j=0;
        for(k=i;k>=0;k--)
        {
            printf("%d\n",a[k][j]);
            j++;
        }
    }
    return 0;
}
