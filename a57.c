/*Q57: Find the sum of array elements.
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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum of elements in array is: %d",sum);    
    return 0;
}