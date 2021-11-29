#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers a,b,c =");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("the largest number is a=%d",a);
        else
            printf("the largest number is c=%d",c);
    }
    else
    {
        if(b>c)
            printf("the largest number is b=%d",b);
        else
            printf("the largest number is c=%d",c);
    }
    getch();


}
