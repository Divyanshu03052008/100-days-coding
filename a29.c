/*Q29: Write a program to calculate the factorial of a number.
Sample Test Cases:
Input 1:
5
Output 1:
120
Input 2:
3
Output 2:
6
*/
#include <stdio.h>
int main(){
    int x;
    printf("enter your no:");
    scanf("%d",&x);
    int fac=1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
    printf("factorial of no is:%d",fac);
    return 0;
}