#include<stdio.h>
#define Max 100

subseq(int arr[],int n)
{
int count;
int pos=0,i,j,len=0;
for(i=0;i<n;i++)
{
count=0;
for(j=i;j<n;j++)
{

if(0>arr[j]==arr[j+1]>0 || 0>arr[j+1]==arr[j]>0)
	count++;

else
   break;

}

if(len<count)
{	
len=count;
pos=i;}
i=j;
}
for(j=pos;j<=len+pos;j++)
 printf("%d ",arr[j]);
}

main()
{
//int prev=-1;
int arr[] = { 1, -2, 6, 4, -3, 2, -4, -3 };
int n = sizeof(arr) / sizeof(arr[0]);/*
printf("\n enter the size of array");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nenter the element:");
scanf("%d",&arr[i]);
}*/

printf("%d ",n);

subseq(arr,n);


//printf("%d ",prev);
}
