#include<stdio.h>
#include<math.h>
void stats(int,int[]);
int main(){
int size;
printf("enter size of array");
scanf("%d",&size);
int a[size];
int i;
printf("enter array elements");
for(i=0;i<size;i++)
{
 scanf("%d",&a[i]);
}
stats(size,a);
return 0;
}
void stats(int size,int a[size]){
 int i,j;
 int sum=0;
 int temp;
 int sum1;
 for(i=0;i<size;i++)
 {
  sum=sum+a[i];
 }
 printf("sum is %d",sum);
 float mean;
 mean=(float)sum/size;
 printf("\nmean is %f",mean);
 for(i=1;i<=size-1;i++)
 {
 for(j=0;j<size-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 printf("\nelements after sorting:\n");
 for(j=0;j<size;j++)
 {
 printf("%5d",a[j]);
 }
 for(i=0;i<size;i++)
 {
   sum1=sum1+pow((a[i]-mean),2);
 }
 float var;
 var=sum1/(float)size;
 float SD;
 SD=sqrt(var);
 printf("\nvariance is %f and standard deviation is %f",var,SD);
 return ;
 }
