#include <stdio.h>
#include<conio.h>
void main()
{
  int count,n;
  printf("enter the values");
  scanf("%d",&n);
  while(n!=0)
  {
      n=n/10;
      count++;
  }
   
printf("%d",count);
getch();
}
