/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3*/
#include <stdio.h>
int rotate(int a[],int n,int k);
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
    int k;
    printf("enter your k position to rotate:");
    scanf("%d",&k);
    rotate(a,n,k);    
    return 0;    

}
int rotate(int a[],int n,int k){
    printf("after rotating by k position:\n");
    for(int i=n-k;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<n-k;i++){
        printf("%d ",a[i]);
    }

}