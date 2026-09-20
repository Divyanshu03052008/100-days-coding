/*Q60: Count positive, negative, and zero elements in an array.*/
#include <stdio.h>
int count_integer_type(int a[],int n);
int main(){
    int n;
    int count_1=0;
    int count_2=0;
    int count_3=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter your no for this %d position:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    count_integer_type(a,n);
    return 0;
}
int count_integer_type(int a[],int n){
    int count_1=0;
    int count_2=0;
    int count_3=0;
    for(int i=0;i<n;i++){
        if(a[i]>0)
            count_1++; //positive
        else if(a[i]<0)
            count_2++;  //negative
        else if(a[i]==0)
            count_3++;  //zero
    }
    printf("Positive %d,Negative %d,Zero %d",count_1,count_2,count_3);
}