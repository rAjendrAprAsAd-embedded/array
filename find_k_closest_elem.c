#include<stdio.h>
#define Max 100
int mid(int arr[],int ele,int n)
{
int low=0,high=n-1;
int mid;
while(low<high)
{
mid =low+(high-low)/2;

if(arr[mid]>ele)
{
high=mid-1;
}
else if(arr[mid]<ele)
{
low=mid+1;
}
else
	return mid; //key found
}
return low;//key where not found
}

kele(int arr[],int ele,int k,int n)
{
int left,right;
int i;
i=mid(arr,ele,n);
left=i-1;
right=i;

while(k-->0)
{

if(left>0 || right<n)
{
if(abs(ele-arr[left])>abs(arr[right]-ele) )
{
right++;
	//printf("%d  ",arr[right]);
}
else
   {left--;}//printf("%d  ",arr[left]);
}
}
left++;
printf("\n");
while(left<right)
{
printf("%d ",arr[left]);left++;
}
}
main()
{
int i,j,n,arr[Max],k,ele;
//int prev=-1;
printf("enter the element");
scanf("%d",&ele);
printf("\nenter no of near ele:");
scanf("%d",&k);
printf("\n enter the size of array");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nenter the element:");
scanf("%d",&arr[i]);
}

printf("\n");

kele(arr,ele,k,n);


//printf("%d ",prev);
}
