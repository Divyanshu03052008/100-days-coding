/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
Sample Test Cases:
Input 1:
-5
Output 1:
Negative
Input 2:
0
Output 2:
Zero
Input 3:
10
Output 3:
Positive
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter the no");
    scanf("%d",&n);
    if(n>0){
        printf("positive\n");
    }
    else if(n=0){
        printf("zero\n");
    }else{
        printf("negative\n");
    }
    return 0;
}