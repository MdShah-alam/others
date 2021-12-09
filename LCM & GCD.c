#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,rem,GCD,LCM,numaretor,denominator;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    if(a>b)
    {
        numaretor=a;
        denominator=b;
    }
    else
    {
        numaretor=b;
        denominator=a;
    }
    rem=numaretor%denominator;
    while(rem!=0)
    {
        numaretor=denominator;
        denominator=rem;
        rem=numaretor%denominator;
    }
    GCD=denominator;
    LCM=(a*b)/GCD;
    printf("GCD=%d\n",GCD);
    printf("LCM=%d",LCM);
    getch();
}
