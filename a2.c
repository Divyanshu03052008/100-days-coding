/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
    int a;
    printf("enter 1st no:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd no:");
    scanf("%d",&b);
    int sum=a+b;
    int diff_1=a-b;
    int diff_2=b-a;
    int prod=a*b;
    int quot=a/b;
    printf("Sum:%d,Diff1:%d,Diff2:%d,Product:%d,Quotient:%d",sum,diff_1,diff_2,prod,quot);
    return 0;
}