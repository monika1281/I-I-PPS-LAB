#include <stdio.h>
void largest (int,int[]);
void smallest (int, int[]);
void sum(int, int[]);
void average (int, int[]);
void switch_case(int,int,int[]);
int main() {
    int size;
    printf("enter size of array ");
    scanf ("%d",&size);
    int a[size];
    printf ("enter array elements:\n");
    int I;
    for(I=0;I<size;I++)
    {
        scanf ("%d",&a[I]);
    }
    int num;
    printf("Enter \n1 to find smallest number \n2 to find largest \n3 to find sum \n4 to find average in the   given array\n");
    scanf ("%d",&num);
    switch_case(num,size,a);
    return 0;
    }
    void switch_case(int num,int size,int a[size])
    {
    switch(num){
    case 1:
    smallest(size,a);
    break;
    case 2:
    largest(size,a);
    break;
    case 3:
    sum(size,a);
    break;
    case 4:
    average(size,a);
    break;
      
    }
    return ;
    }
   
    void sum(int size,int a[size]){
    int I;
    int sum=0;
    for(I=0;I<size;I++)
    { 
        sum=sum+a[I];
     
    }
    printf ("sum is %d",sum);
    return;
}

void smallest (int size, int a[size]){
    
    int I;
    int small=a[0];
    for(I=1;I<size;I++) {
    if(a[I]<small)
    
    {  
        small=a[I];
    
    }
        
    }
    printf ("small is %d",small);
    return;
}

void largest(int size, int a[size]){
    
    int I;
    int large=a[0];
    for(I=1;I<size;I++) {
    if(a[I]>large)
    
    {  
     large=a[I];
    
    }
        
    }
    printf ("large is %d",large);
    return;
}
void average(int size,int a[size])
{
    int I;
    float sum=0;
    for(I=0;I<size;I++)
    { 
        sum=sum+a[I];
     
    }
    float average;
    average=sum/size;
    printf ("average is %f",average);
    return;
}
--------------------------------------------------
  output:-
    enter size of array 5
    enter array elements:
    2 3 1 8 6
   enter
    
