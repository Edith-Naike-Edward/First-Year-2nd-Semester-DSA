#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int i;
    int j;
    int SelectionSortArray[]={3,6,1,9,12,5,4,2,15,27};
    int smallest[i], largest[i], current[i], next[i], sortedsmallest[i];
    for (i=0;i<10;i++)
    {
        //current[i]=3;
        if (current[i]<next[i])
        {
            current[i]=smallest[i];
        }
        else if (current[i]>next[i])
        {
            next[i]=smallest[i];
        }
        sortedsmallest[i]=smallest[i];
        printf("The smallest element is %d\n",sortedsmallest[i]);
    }

    //for ()
}
