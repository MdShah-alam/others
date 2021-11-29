#include<stdio.h>
#include<conio.h>
int main()
{
 int A[10],i,j,temp;
 printf("Enter the elements of array=");
 for(i=0;i<=9;i++)
 {
     scanf("%d",&A[i]);
 }
 for(i=0;i<10;i++)
 {
     for(j=i+1;j<10;j++)
     {
         if(A[i]<A[j])
         {
             temp=A[i];
             A[i]=A[j];
             A[j]=temp;
         }
     }
 }
  printf("Ascending array=");
 for(i=0;i<=9;i++)
 {
     printf("%d ",A[i]);
 }
    getch();
}

