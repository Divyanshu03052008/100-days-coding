/*Q61: Search for an element in an array using linear search.*/
#include <stdio.h>
int main(){
   int n;
   int target=0;
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
    printf("search for any element:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(target==a[i]){
            printf("entered element is at %d index",i);
            break;
        }
    }

 return 0;
    
}