/*Q63: Merge two arrays.*/
#include <stdio.h>
int main(){
    int n1,n2;
    printf("enter the no of elements:");
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++){
        printf("enter your no for this %d position:",i);
        scanf("%d",&a[i]);
    }
    printf("enter the no of elements:");
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++){
        printf("enter your no for this %d position:",i);
        scanf("%d",&b[i]);
    }
    int c[n1+n2];
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        c[i+n1]=b[i];
    }
    printf("merged array:\n");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",c[i]);
    }


    return 0;
}
