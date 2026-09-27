/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6*/
#include <stdio.h>
int insert(int a[],int n,int value);
int main(){
    int n;
    printf("enter no of element for sorted array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter your no for this %d position:",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    int value=1;    
    printf("enter value to insert :");
    scanf("%d",&value); 
    printf("\n");   
    insert(a,n,value);
    return 0;
}
int insert(int a[],int n,int value){
    int p=0;
    for(int i=0;i<n;i++){
        if(value<=a[i]){
            p=i;
            break;
        }
    }
    n++;
    for(int j=n-1;j>=p;j--){
        a[j+1]=a[j];
    }
    a[p]=value;
    printf("after inserting\n");
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
    
}
