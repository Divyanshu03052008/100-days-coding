/*Q59: Count even and odd numbers in an array
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3
Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/
#include <stdio.h>
int even_odd(int a[],int n);
int main(){
    int n;
    int even=0,odd=0;
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
    even_odd(a,n);   
    return 0;
}   
int even_odd(int a[],int n){
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("even=%d,odd=%d",even,odd);
}     