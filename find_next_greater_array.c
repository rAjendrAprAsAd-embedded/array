#include<stdio.h>
#define Max 100
main()
{
int i,j,n,arr[Max];
int prev=-1;
printf("\n enter the size of array");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nenter the element:");
scanf("%d",&arr[i]);
}

printf("\n");

for(i=0;i<n;i++)
{
	prev=-1;
	for(j=i+1;j<n;j++)
	{
		if(arr[j]>arr[i])
		  { 
			prev=arr[j];
			 break;
		   }


	}

printf("%d ",prev);
}
}
