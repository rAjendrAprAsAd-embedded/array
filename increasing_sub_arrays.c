#include<stdio.h>
#define Max 100

inc_subseq(int arr[],int n)
{
int count=0;
int j=0,i=0,k;
for(i=0;i<n-1;i++)
{

for(j=i;j<n-1;j++)
{

if(arr[j]<arr[j+1])
{
  count++;
printf("{");
  for(k=i;k<=j+1;k++)
   printf("%d,",arr[k]);
printf("\b}");
  printf("\n");		
}
	
else
  break;
}
}
printf("%d\n",count);
}



main()
{
int arr[] = { 5, 4, 3, 2, 1 };//{1, 3, 2};//{ 1, 2, 4, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
inc_subseq(arr,n);
}
