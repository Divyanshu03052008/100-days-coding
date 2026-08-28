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
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    int original =n;
    if(n==0){
        printf("binary is 0");
        return 0;
    }
    int rem,binary=0,place=1;
    while(n>0){
        rem=n%2;
        binary=binary +rem*place;
        place=place*10;
        n=n/2;
    }
    printf("binary of %d is %d",original,binary);

    return 0;
}