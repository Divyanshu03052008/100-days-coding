/*Q31: Write a program to take a number as input and print its equivalent binary representation.
Sample Test Cases:
Input 1:
10
Output 1:
1010
Input 2:
7
Output 2:
111
*/
#include <stdio.h>
int main(){
    int i=0;
    int binary[32];
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    if(n==0){
        printf("binary=0");
    }
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    printf("Binary =");
    for(i=i-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    return 0;
}