#include<stdio.h>
#include<conio.h>
main()
{
	int i=2;
	switch(i)
	{
		case 1:
			printf(" A ");
			case 2:
				printf(" B ");
				continue;
				case 3:
					printf(" C ");
					break;
					default:
						printf(" D ");
	}
	getch();
}
