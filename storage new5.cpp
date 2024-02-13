#include<stdio.h>
#include<conio.h>
main()
{
	int a=5;
	++a;
	printf("%d\n",a);
	{
		int a=10;
		--a;
		printf("%d\n",a);
	}
	getch();
}
