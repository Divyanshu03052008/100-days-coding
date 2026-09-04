
/*Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>
#include <math.h>
int count_nos(int);
int main(){
    int n,count=0,last_digit=0,first_digit=0,swappedno=0,median;
    printf("enter your no:");
    scanf("%d",&n);
    count=count_nos(n);
    last_digit=n%10;
    first_digit=n/(int)(pow(10,count-1));
    median=n%(int)(pow(10,count-1))/10;
    swappedno=last_digit*(int)pow(10,count-1)+median*10+first_digit;
    printf("swaping of first and last digit of no:%d",swappedno);
    return 0;
}
int count_nos(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}