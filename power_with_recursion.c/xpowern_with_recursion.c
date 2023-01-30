#include<stdio.h>
int power(int,int);
int main(){
int x,n;
printf("Enter X value");
scanf("%d",&x);
printf("Enter power of X");
scanf("%d",&n);
int result;
result=power(x,n);
printf("result is %d",result);
return 0;
}
int power(int x,int n){
if(n==0)
{
return 1;
}
else if(n==1)
{
return x;
}
else if (n%2==0)
{
return power(x*x,n/2);
}
else
return x*power(x*x,(n-1)/2);

}


