/*Q42: Write a program to check if a number is a perfect number.
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number
Input 2:
10
Output 2:
Not perfect number
*/
#include <stdio.h>
int main(){
    int x,sum=0;
    printf("enter your no:");
    scanf("%d",&x);
    int original=x;
    if(x==0){
        printf("0 is not a perfect no");
    }
    for(int i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
        }else{
            continue;
        }
    }
    if(original==sum){
        printf("it is a perfect no");
    }else{
        printf("not a perfect no");
    }
    return 0;
}