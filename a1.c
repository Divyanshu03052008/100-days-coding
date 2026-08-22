//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main(){
    int a;
    printf("enter 1st no:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd no:");
    scanf("%d",&b);
    int sum =a+b;
    printf("sum:%d\n",sum);

    return 0;

}