#include<stdio.h>
int power(int,int);
int main(){
	int x,n;
	printf("Enter X value");
	scanf("%d",&x);
	printf("Enter nth power of x");
	scanf("%d",&n);
	int result;
	result=power(x,n);
	printf("result:%d",result);
	return 0;
}
int power(int x,int n){
	int result=1;
	int i;
	for(i=1;i<=n;i++){
	 result=result*x;
	}
	return result;
	
}
-------------------------------------
output:
Enter X value 4
Enter nth power of x 3
result:64
