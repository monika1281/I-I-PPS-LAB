#include<stdio.h>
void binary_search(int size ,int a[],int key)
{
 int size;
 printf("Enter array size");
 scanf("%d",&size);
 int a[size];
 printf("enter array elements");
 int i;
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 int key;
 printf("enter key element");
 scanf("%d",&key);
 binary_search(size,a,key);
 return ;
 }
 void binary_search(int size,int a[size],int key)
 {
 int i,j;
 for(i=0,i<size-1;i++)
 {
 for(j=0;j<size-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 printf("elements after sorting");
 for(i=0;i<size:i++)
 {
 scanf("%d",a[i]);
 }
 
 int low=0;
 int high=size-1;
 while(low<=high)
 {
 int mid=(low+high)/2;
 if(key<a[mid])
 {
 high=mid-1;
 }
 else if(key==a[mid])
 {
 printf("element found at %d position",mid+1);
 }
 }
 return ;
 }
