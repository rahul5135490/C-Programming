#include<stdio.h>
#include<conio.h>
void rahul()
{
	int a=10;
	--a;
	printf("%d\n",a);
}
main()
{
	int a=5;
	++a;
	rahul();
	rahul();
	printf("%d\n",a);
	getch();
}
