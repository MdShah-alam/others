#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a ,b ,c =");
    scanf("%d%d%d",&a,&b,&c);
    float x1,x2;
    int det=b*b-4*a*c;
    if(det<0)
    {
        printf("imaginary numbers");
    }
    else
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        printf("The value of x1 is=%.2f\n",x1);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("The value of x2 is=%.2f",x2);
    }
    getch();
}
