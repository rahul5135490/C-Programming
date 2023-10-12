#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	printf("enter a value :");
	scanf("%d",&n);
	for(i=1;i<=n;i+2)
	{
		for(j=1;j<=i+2;j++)
		printf("*");
		printf("\n");
	}
	getch();
}
