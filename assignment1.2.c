#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void main()
{
    int i;
    int k;
    int j;
    int rowA;
    int colA;
    int colB;
    int sum;
    int c[i][j];
    int b[i][j];
    int a[i][j];

    printf("Enter the number of rows:");
    scanf("%d",&rowA);
    printf("Enter the number of columns:");
    scanf("%d",&colB);

    printf("\nEnter values for the first matrix:\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            printf("Enter entry[%d][%d]:",i,j);
            //scanf("%d",&a[i][j]);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter values for the second matrix:\n");
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            printf("Enter entry[%d][%d]:",i,j);
            //scanf("%d",&b[i][j]);
            scanf("%d", &b[i][j]);
        }
    }

    for (i=0; i<rowA; i++)
    {
        for (j=0;j<colB; j++)
        {
            sum=0;
            for (k=0;k<colA;k++)
            {
                sum+= a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
}
