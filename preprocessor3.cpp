#include<stdio.h>
#include<conio.h>
main()
{
	printf("A");
	# if 5>3 || 7<3
	printf("B");
	# else
	printf("M");
	printf("N");
	# endif
	getch();
}
