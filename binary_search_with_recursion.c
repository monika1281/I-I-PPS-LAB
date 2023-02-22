#include<stdio.h>
int binary_search(int ,int [],int,int,int );
int main(){
	
 int size;
 printf("Enter array size");
 scanf("%d",&size);
 int low=0;
 int high=size-1;
 int a[size];
 printf("enter array elements");
 int i;
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 int key;
 printf("enter key element:");
 scanf("%d",&key);
 int result=0;
 result=binary_search(size,a,key,low,high);
 if(result==-1){
 printf("search is unsuccessful");
}
 else
 printf("element found at index %d ",result+1);
 
 return 0;
 }
 int binary_search(int size,int a[],int key,int low,int high)
 {
  
 if(low<=high)
 {
  int mid;
 mid=(low+high)/2;
 if(key>a[mid])
 {
 return binary_search(size,a,key,mid+1,high);
 }
 else if(key==a[mid])
 {
 return mid;
 }
 else if(key<a[mid])
 {
 return binary_search(size,a,key,low,mid-1);
 }
 }
 return -1 ;
 }
------------------------------------
 output:-
  Enter array size:5
enter array elements: 2 4 6 7 9
enter key element: 7
element found at index 4
--------------------------------
output 2:-
Enter array size: 5
enter array elements: 2 4 7 8 9
enter key element: 5
search is unsuccessful
--------------------------------
