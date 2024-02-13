#include<stdio.h>
#include<conio.h>
int mystrlen(const char *src)
{
	int i, count=0;
	for(i=0;src[i]!='\0';i++)
	{
		++count;
		
	}
	return count;
}
main()
{
	int s,l;
	char str[10];
	printf("Enter a string:");
	gets(str);
	s=sizeof(str);
	l=mystrlen(str);
	printf("\n size of string=%d",s);
	printf("\n length of string=%d",l);
	getch();
}
