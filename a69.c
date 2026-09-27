/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40*/
#include<stdio.h>
int sort(int a[],int n);
int main(){
    int n;
    printf("enter the no of element:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter your valie in %d position:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    sort(a,n);
    printf("your second largest no in this array is %d:",a[n-2]);
    return 0;
}
int sort(int a[],int n){
    int t=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("sorted array in asc:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}    