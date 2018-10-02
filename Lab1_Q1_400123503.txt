#include <stdio.h>
#include <stdlib.h>

// Oluwatimilehin Agiri_agirio_Sep 27_Lab 08_Variant 1

int main()
{
    int i,sum = 0;
    for(i=41;i<=301;i++)
    {
        if(i%3==0)
            sum = sum + i;
    }
    printf("The sum of all multiples of 3 between 41 and 301 is %d\n",sum);

    return 0;
}
