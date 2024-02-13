#include<stdio.h>
#include<conio.h>
main()
{
	int a=57;
	++a;
	printf("%d\n",a);
	{
		int a=100;
		--a;
		printf("%d\n",a);
	}
	++a;
	printf("%d\n",a);
	getch();
}
