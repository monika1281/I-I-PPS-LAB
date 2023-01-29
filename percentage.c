#include <stdio.h>
int main(){
int marks;
printf("enter the marks ");
scanf("%d",&marks);
if(marks>=90&&marks<=100){
printf("distinction");
}
else if(marks>60&&marks<90){
printf("grade-b");
}
else if(marks<=60&&marks>35){
printf("grade-c");
}
else if(marks<=35&&marks>=0){
printf("fail");
}
else{
printf("enter the marks between 0 and 100 ");
}
return 0;
}
-----------------------------------------
output :
enter the marks 100
distinction
