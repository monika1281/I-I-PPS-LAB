#include<stdio.h>
int linearsearch(int,char[],char);
int main(){
int size ;
printf("Enter size of array");
scanf("%d",&size);
char a[size];
int i;
printf("enter a string");
for(i=0;i<size;i++)
{
 scanf(" %c",&a[i]);
 }
char key;
 printf("enter any character of your choice to check its's position");
 scanf(" %c",&key);
int result;
result=linearsearch(size,a,key);
printf("position of char is %d",result);
return 0;
}
int linearsearch(int size, char a[size],char key){
 int i;
 for(i=0;i<size;i++)
 {
 if(key==a[i])
 {
 return i+1;
 }
 }
 
 if(i==size)
 {
 return -1;
 }
 

 }
 
 
