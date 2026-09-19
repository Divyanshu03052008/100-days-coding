/*Q58: Find the maximum and minimum element in an array.
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter your no for %d:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    int max_no=a[1],min_no=a[1];
    for(int i=0;i<n;i++){
        if(max_no<a[i]){
            max_no=a[i];
        }
        
    }
    for(int j=0;j<n;j++){
        if(min_no>a[j]){
            min_no=a[j];
        }
    }
    printf("maximum value,minimum value:%d %d",max_no,min_no);
    return 0;
}    