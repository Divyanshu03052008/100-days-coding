/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5*/
#include <stdio.h>
int delete(int a[],int n,int d );
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
    int d=0;
    printf("enter your position from 0 to pos:");
    scanf("%d",&d);
    delete(a,n,d);

    return 0;
}   
int delete(int a[],int n,int d ){
    for(int i=d+1;i<=n-1;i++){
        a[i-1]=a[i];
    }
    n--;
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
}