/*Q16: Write a program to input three numbers and find the largest among them using if–else.
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7
Input 2:
-1 -5 0
Output 2:
Largest is 0
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st no:");
    scanf("%d",&a);
    printf("enter 2nd no:");
    scanf("%d",&b);
    printf("enter 3rd no:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("largest no is:%d",a);
    }
    else if(b>a && b>c){
        printf("largest no is:%d",b);
    }

    else if(c>a && c>b){
        printf("largest no is:%d",c);
    }
    else{
        printf("all digits are same");
    }
    return 0;
}

