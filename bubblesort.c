#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[]={23,4,6,2,11,75,57,24,92,0,84,5,12,1,9};
    int swaps=0;
    int temp;
    int nomoreswaps=0;
    int size=sizeof(array);
    for (int i=1;i<=sizeof(array);i++)
    {
        if (array[i]>array[i+1])
        {
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]= temp;
            swaps=swaps++;
            for (int k=1;k<=size;k++)
            {
                printf("%d ",array[i]);
            }
        }
        //if ()
    }
}
