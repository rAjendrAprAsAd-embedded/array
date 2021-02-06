#include<stdio.h>
#define Max 100

subseq(int arr[],int n)
{
int count;
int pos=0,i,j,len=0;
for(i=0;i<n-1;i++)//sorting
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
arr[j]=arr[j]+arr[j+1];
arr[j+1]=arr[j]-arr[j+1];
arr[j]=arr[j]-arr[j+1];
}
}
}
for(i=0;i<n;i++)
{ printf("%d",arr[i]);
}

for(i=0;i<n;i++)
{
count=1;
for(j=i;j<n;j++)
{
if(arr[j]==arr[j+1])
  continue;

if(arr[j]+1==arr[j+1])
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
printf("\n%d\n",len);
for(j=pos;j<len+pos;j++)
{
if(arr[j]==arr[j+1])
{
		len++;
	continue;
	//len++;
} 
printf("%d ",arr[j]);
}
}
main()
{
//int prev=-1;
int arr[] = {  2, 0, 6,3, 1, 5, 7 };
int n = sizeof(arr) / sizeof(arr[0]);

subseq(arr,n);


//printf("%d ",prev);
}
