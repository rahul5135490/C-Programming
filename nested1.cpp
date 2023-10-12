#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		printf("%d\n",i);
		for(j=1;j<=4;j++)
		printf("%d\t",j);
		printf("\n");
	}
	getch();
}
