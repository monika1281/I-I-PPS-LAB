#include <stdio.h>
int main(){
int num,i=1;
printf("enter the number : ");
scanf("%d",&num);
int n;
printf("enter last number : ");
scanf("%d",&n);
while(i<=n){
printf("%d x %d =%d\n",num,i,i*num);
i++;
}
return 0;
}
-------------------------------
output : 
enter the number : 5
enter last number : 10
5 x 1 =5
5 x 2 =10
5 x 3 =15
5 x 4 =20
5 x 5 =25
5 x 6 =30
5 x 7 =35
5 x 8 =40
5 x 9 =45
5 x 10 =50
