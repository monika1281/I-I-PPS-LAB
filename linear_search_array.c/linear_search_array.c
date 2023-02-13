#include<stdio.h>
int linear_search(int,int[],int);
int main()
{
int size;
printf("enter size of the array:");
scanf("%d",&size);
int a[size];
printf("enter array elements");
int i;
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
int key;
printf("enter key");
scanf("%d",&key);
int result=0;
result=linear_search(size,a,key);
if(result==-1)
{
printf("key not found");
}
else
printf("key found at %d position ",result+1);

return 0;
}
int linear_search(int size, int a[],int key)
{
int i;
for(i=0;i<size;i++)
{
if(key==a[i])
{ return i;
}
}
return -1;
}

