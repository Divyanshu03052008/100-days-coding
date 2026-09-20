/*Q62: Reverse an array without taking extra space.*/
#include <stdio.h>
int main(){
    int n;
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
    printf("\n");
    int st=0;
    int en=n-1;
    while(st<en){
        a[st]=a[en]^a[st];
        a[en]=a[en]^a[st];
        a[st]=a[en]^a[st];
        st++;
        en--;
    }
    printf("reverse array:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
    
}