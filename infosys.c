//same like array right shift

/* input array n1 n2
rotate array n1 times and n2 times count  each rotation 
untill match with original array*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int str(char *ptr,int n1,int n2)
{

int len = strlen(ptr);
    int count=0;
    char *buff1=(char *)malloc(len*sizeof(char)+1);
    char *buff2=(char *)malloc(len*sizeof(char)+1);
strcpy(buff2,ptr);
while(1)
{
strcpy(buff1,buff2+(sizeof(char)*(len-n1)));
strncpy(buff1+n1,buff2,len-n1);
count++;
strcpy(buff2,buff1);

if(strcmp(ptr,buff1)==0)
  return count;

strcpy(buff1,buff2+(sizeof(char)*(len-n2)));
strncpy(buff1+n2,buff2,len-n2);
count++;
strcpy(buff2,buff1);

if(strcmp(ptr,buff1)==0)
 return count;
}
}
main()
{
int n1=2,n2=2;
char *arr="abcabc";
printf("%d",str(arr,n1,n2));
}
