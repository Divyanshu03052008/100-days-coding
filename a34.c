/*Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime
Input 2:
10
Output 2:
Not prime
*/
#include <stdio.h>
int main(){
    int a;
    printf("enter your no:");
    scanf("%d",&a);
    int is_prime=1;
    for(int i=1;i<a;i++){
        if(i==1){
            i++;   
        }
        if(a%i==0){
            is_prime=0;
            break;
        }
    }
    if(is_prime==1){
        printf("Primeno");
    }else{
        printf("Not prime");
    }
    return 0;   
}