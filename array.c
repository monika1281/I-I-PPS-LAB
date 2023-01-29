#include<0stdio.h>
int main(){

int n;
printf("enter array size:");
scanf("%d",&n);
int a[n];
int                                                                                                                                         i;

printf("enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

int max=a[0], min=a[0], sum=0;

for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\nmax is %d",max);
for(i=1;i<n;i++){
if(a[i]<min)
{
min=a[i];
}
}
printf("\nmin is %d",min);
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\nsum of array elements is %d",sum);
float avg=(float)sum/n;
printf("avg is %f",avg);

return 0;
}
------------------------------------------
output:
enter array size:3
enter array elements: 2 4 5
max is 5
min is 2
sum of array elements is 11
avg is 3.666667
