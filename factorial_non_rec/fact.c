#include<stdio.h>
void fact(int);
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
fact(n);
return 0;
}
void fact(int n){
 int fact=1;
 int i;
 for(i=n;i>=1;i--)
 {
 fact=fact*i;
 }
 printf(" Factorial is %d",fact);
 return ;
}
