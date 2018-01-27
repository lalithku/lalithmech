#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   printf("\n Enter the year");
   scanf("%d",&a);
   if(a%4 == 0)
   {
       printf("\n The year is leap year");   
   }
   else
   {
       printf("\n The year is not a leap year");   
   }
getch();
}


