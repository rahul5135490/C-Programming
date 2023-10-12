#include<stdio.h>
#include<conio.h>
main()
{
	int i=2;
	ABC:
		printf("%d\n",i);
		i=i+2;
		if(i<=20)
		goto ABC;
		getch();
}
