#include<stdio.h>
#include<conio.h>
#define size 10
main()
{
	int arr[size],i,t;
	printf("Enter %d value",size);
	for(i=0;i<size;i++)
	scanf("%d",& arr[i]);
	// logic
	for(i=0;i<size/2;i++)
	{
		t=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=t;
	}
		printf("Reverse of array list");
		for(i=0;i<size;i++)
		printf("%3d" ,arr[i]);
		getch();
	
}
