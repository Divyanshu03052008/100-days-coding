/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56
Input 2:
5
Output 2:
Approximate sum: 2.22*/
#include <stdio.h>
int main(){
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    float sum=0.00,num=0.00,dem=0.00;
    for(int i=1;i<=n;i++){
        num=2*i;
        dem=4*i-1;
        sum=sum+num/dem;
    }
    printf(" Approximate sum:%f",sum);
    return 0;
}