#include<stdio.h>
#include<conio.h>
int main()
{
    double mark;
    int n;
    printf("Enter the value of subject mark:");
    scanf("%lf",&mark);
    n=mark/10;
    switch(n)
    {
    case 10:
    case 9:
    case 8:
        printf("Your grade is A+");
        break;
    case 7:
        printf("Your grade is A");
        break;
    case 6:
        printf("Your grade is A-");
        break;
    case 5:
        printf("Your grade is B");
        break;
    case 4:
        printf("Your grade is C");
        break;
        default:
        if(mark>=33)
            printf("Your grade is D");
        else
            printf("you Fail");

    }
    getch();
}
