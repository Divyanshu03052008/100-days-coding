
/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome
Input 2:
123
Output 2:
Not palindrome
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    int original=n;
    int rev=0;
    int rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}