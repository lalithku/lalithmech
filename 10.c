#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],a,j,n,d,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
    printf("Enter the number:");
    scanf("%d",&a[a]);
    }
    printf("Enter the number of terms to get sum:");
    scanf("%d",&j);
    for(d=0;d<j;d++)
    sum=sum+a[d];
    printf("The sum of %d numbers is:%d",j,sum);
 getch();
}
