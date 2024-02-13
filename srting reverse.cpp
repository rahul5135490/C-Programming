#include<stdio.h>
#include<conio.h>
#include<string.h>
void mystrrev(char*src)
{
	char ch;
	int i,l;
	l=strlen(src);
	for(i=0,i<l/2;i++)
	{
		ch=src[i];
		src[i]=src[l-i-1]
	}
}
