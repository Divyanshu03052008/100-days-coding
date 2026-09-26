/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7*/
#include <stdio.h>
int sort(int a[],int n);
int most_occur(int a[],int n);
int main(){
    int n=0;
    int t=0;
    printf("enter your no:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the value for %d position:",i);
        scanf("%d",&a[i]);
    }
    printf("original array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    sort(a,n);
    most_occur(a,n);
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
int most_occur(int a[],int n){
    int freq=1;
    int check=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            freq++;
            check=a[i];
        }
    }
    printf("most occuring no is %d",check);
}