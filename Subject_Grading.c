#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int Grade,marks,number_of_subject,Term;
double Points,GPA,CGPA,total_gpa=0.00;
double cgpa=0.00;
int main()
{
    bool failed=false;
    printf("Enter number of terms:");
    scanf("%d",&Term);
    for(int i=1; i<=Term; i++)
    {
        printf("\nTerm %d:\n",i);
        printf("Enter the number of subject :");
        scanf("%d",&number_of_subject);
        printf("\n");
        for(int j=1; j<=number_of_subject; j++)
        {
            printf("\nEnter the marks of subject %d:",j);
            scanf("%d",&marks);
            if (marks>=80)
            {
                printf("Grade = A+ , ");
                Points = 5.00;
            }
            else if (marks>=70)
            {
                printf("Grade = A , ");
                Points = 4.00;
            }
            else if (marks>=60)
            {
                printf("Grade = B , ");
                Points = 3.00;
            }
            else if (marks>=50)
            {
                printf("Grade = C , ");
                Points = 2.00;
            }
            else if (marks>=40)
            {
                printf("Grade = D , ");
                Points = 1.00;
            }
            else if(marks<40)
            {
                printf("Grade = F , ");
                Points = 0.00;
                failed=true;
            }
            total_gpa=total_gpa+Points;
            printf("Point=%.2lf\n",Points);
        }
        if(failed)
        {
            printf("You have failed\n");
        }
        else
        {
            GPA=total_gpa/number_of_subject;
            printf("GPA = %.2lf\n",GPA);
        }
    }
    if(failed)
    {
        printf("You have failed");
    }
    else
    {
        cgpa=cgpa+GPA;
        CGPA=cgpa/Term;
        printf("CGPA = %.2lf",CGPA);
    }
    getch();
}
