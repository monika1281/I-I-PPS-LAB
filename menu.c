#include <stdio.h>
void largest (int,int[]);
void smallest (int, int[]);
void sum(int, int[]);
void average (int, int[]);
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
    printf ("Enter \n1 to find smallest number \n2 to find largest \n3 to find sum \n4 to find average in the given array\n");
    scanf ("%d",&num);
    switch (num)
    {   case 1:
        smallest (size, a);
        break;
        case 2:
        largest (size, a);
        break;
        case 3:
        sum(size, a);
        break;
        case 4:
        average (size, a);
        break;
        
    }
    return 0;
}

void sum(int size,int a[size]){
    int I;
    int sum=0;
    for(I=0;I<size;I++)
    { 
        sum=sum+a[I];
     
    }
    printf ("sum is %d",sum);
    return ;
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
}
void average(int size,int a[size]){
    int I;
    float sum=0;
    for(I=0;I<size;I++)
    { 
        sum=sum+a[I];
     
    }
    printf ("sum is %f",sum);
    float average;
    average=sum/size;
    printf ("average is %f",average);
    return ;
}
