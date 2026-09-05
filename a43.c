/*Q43: Write a program to check if a number is a strong number.
Sample Test Cases:
Input 1:
145
Output 1:
Strong number
Input 2:
123
Output 2:
Not strong number*/
#include <stdio.h>
int fact_no(int);
int main(){
    int x,r,fact=1;
    printf("enter your no:");
    scanf("%d",&x);
    int original=x;
    int sum=0,rem=0;
    while(x!=0){
        rem=x%10;
        r=fact_no(rem);
        sum=sum+r;
        x=x/10;
    
    }
    if(original==sum){
        printf("Strong no");
    }else{
        printf("Not a strong no");
    }
    return 0;
}
int fact_no(int rem){
    if(rem==1||rem==0){
            return 1;
        }
    int fact=1;
    fact=rem*fact_no(rem-1);
    return fact;
}