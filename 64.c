#include<stdio.h>
void main()
{
	int m,n,res;
	printf("ENTER THE INPUT INTEGERS:\n");
	scanf("%d%d",&m,&n);
	res=m+n;
	if(res%2==0)
	{
		printf("\nTHE RESULT %d IS EVEN",res);
	}
	else
	printf("\nTHE RESULT %d IS ODD",res);
}
