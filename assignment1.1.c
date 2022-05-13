#include <stdio.h>
#include <stdlib.h>

/*struct students
{

} student;*/

void main()
{
    int grade[100][100];
    int no;
    int avg;
    int sum=0;
    int courses;
    char regnumber[100];
    printf("\tProgram to calculate average grade  for each student.\t\n");
    printf("\nEnter the number of students: ");
    scanf("%d",&no);
    /*for (n = 1; n <= 10; c++)
    {
        grade = rand()%100 + 1;
        printf("%d\n",grade);
    }*/
    courses=7;
    for (int i=1; i<=no; i++)
    {
        printf("\nEnter your registration number:");
        scanf("%s",&regnumber);
        for (int j=1; j<=courses; j++)
        {
            grade[i][j]= rand()%100 + 1;
            printf("\nGrade for course for student[%d][%d]:%d",i,j,grade[i][j]);
            sum+= grade[i][j];
            avg= sum/courses;
        }
        printf("\nSum of courses for student:%d",sum);
        printf("\nAverage of courses for student:%d",avg);
    }

}
