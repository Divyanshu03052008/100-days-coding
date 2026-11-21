*/ insert an element in an array at a given position /**/
#include <stdio.h>
int insert(int a[],int n,int pos,int value);
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
    int pos,value=1;    
    printf("enter your position to insert value and also enter value :");
    scanf("%d %d",&pos,&value); 
    printf("\n");   
    insert(a,n,pos,value);
    return 0;
}
int insert(int a[],int n,int pos,int value){
    n++;
    for(int j=n-1;j>=pos-1;j--){
        a[j+1]=a[j];
    }
    a[pos-1]=value;
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
    