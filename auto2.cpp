#include<stdio.h>
#include<conio.h>
void abc()
{
	int a=10;
	--a;
	printf("%d\n",a);
}
main()
{
	int a=5;
++a;
abc();
abc();
printf("%d\n",a);
getch();
}
