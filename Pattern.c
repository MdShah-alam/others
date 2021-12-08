#include<stdio.h>
#include<conio.h>
int main()
{
    int n,row,col;
    printf("Enter the value of n =");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf(" %d ",i);
    }
    printf("\n\n");
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
