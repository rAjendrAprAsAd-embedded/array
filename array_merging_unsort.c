#include<stdio.h>
#include<stdlib.h>

main()
{
int arr[30];
int arr2[30];
int r[100];
int i,j=0,k=0;
int n1,n2,l;
printf("enter the size of arr:");
scanf("%d",&n1);

for(i=0;i<n1;i++)
{
printf("enter the element:");
scanf("%d",&arr[i]);
}

printf("enter the size of second array:");
scanf("%d",&n2);

for(i=0;i<n2;i++)
{
printf("enter the element:");
scanf("%d",&arr2[i]);
}
i=0;k=0;j=0;
//logic for sorted arrays
/*
while(i<n1 && j<n2)
{
if(arr[i]<=arr2[j])
	r[k++]=arr[i++];
else
	r[k++]=arr2[j++];
}
while(i<n1)
{
r[k++]=arr[i++];
}
while(j<n2)
{
r[k++]=arr2[j++];
}
*/
for(i=0;i<n1;i++)
{
	r[k++]=arr[i];
}
for(i=0;i<n2;i++)
{
	r[k++]=arr2[i];
}
j=n1+n2;
/*
for(i=0;i<j;i++,--j)
{
for(k=0;k<j-1;k++)
{
if(r[k]>r[k+1])
	{
		r[k]=r[k+1]+r[k];
		r[k+1]=r[k]-r[k+1];
		r[k]=r[k]-r[k+1];
       }

}
}*/
for(i=0;i<j-1;i++)
{
for(k=0;k<j-i-1;k++)
{
if(r[k]>r[k+1])
	{
		r[k]=r[k+1]+r[k];
		r[k+1]=r[k]-r[k+1];
		r[k]=r[k]-r[k+1];
       }

}
}
j=n1+n2;

for(i=0;i<j;i++)
printf("%d ",r[i]);

}
