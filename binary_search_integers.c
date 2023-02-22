#include<stdio.h>
int binary_search(int ,int [],int );
int main(){
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
 printf("\nenter key element:");
 scanf("%d",&key);
 int result=0;
 result=binary_search(size,a,key);
 if(result==-1){
 printf("search is unsuccessful");
}
 else
 printf("element found at index %d ",result+1);
 
 return 0;
 }
 int binary_search(int size,int a[],int key)
 {
 int low=0;
 int high= size -1;
 while(low<=high)
 {
  int mid;
 mid=(low+high)/2;
 if(key>a[mid])
 {
 low=mid+1;
 }
 else if(key==a[mid])
 {
 return mid;
 }
 else if(key<a[mid])
 {
 high=mid-1;
 }
 }
 return -1 ;
 }
Output:-
Enter array size 5
enter array elements 5 3 7 4 6
elements after sorting:    3    4    5    6    7
enter key element: 5
element found at index 3
-------------------------------------------------------
output:-
Enter array size 5
enter array elements 4 3 6 1 5
elements after sorting:    1    3    4    5    6
enter key element: 7
search is unsuccessful
