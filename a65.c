/*Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3
Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include <stdio.h>
int sort(int a[],int n);
int binary_search(int a[],int n,int target);
int main(){
    int n=0;
    int t=0,target=0;
    printf("enter your no:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the value for %d position:",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    sort(a,n);
    printf("enter your element to search:");
    scanf("%d",&target);
    binary_search(a,n,target);

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
int binary_search(int a[],int n,int target){
    for(int i=0;i<n;i++){
        if(a[i]==target){
            printf("your searched value is at %d position",i);
        }
    }
}