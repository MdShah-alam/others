#include<stdio.h>
#include<conio.h>
int main()
{
    int nth,i;
    int sum=0;
    printf("Enter the nth numbers =");
    scanf("%d",&nth);
    for(i=1; i<=((nth*2)-1); i=i+2)
    {
        printf("%d+",i);
        sum=sum+i;
    }
    printf("\n");
    double average=sum/nth;
    printf("The sum is=%d\n",sum);
    printf("The average is=%.2lf",average);
    getch();
}
