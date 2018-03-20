#include<stdio.h>
void main()
{
	int n;
	printf("ENTER THE INPUT INTEGERS:\n");
	scanf("%d",&n);
        if(n%7==0)
		printf("\nTHE GIVEN INTEGER  %d  IS DIVISBLE BY 7",n);
	else
   	printf("\nTHE GIVEN INTEGER  %d  IS NOT  DIVISBLE BY 7",n);
}
