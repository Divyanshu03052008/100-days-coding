/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet
Input 2:
a
Output 2:
Lowercase alphabet
Input 3
3
Output 3:
Digit
Input 4:
#
Output 4:
Special character
*/
#include <stdio.h>
#include <math.h>
int main(){
    char C;
    printf("enter the character:");
    scanf("%c",&C);
    if(C >='a' && C <='z'){
        printf("lowercase alphabet");
    }
    else if(C >='A'&& C <='Z'){
        printf("uppercase alphabet");
    }
    else if(C >=1 && C <=9){
        printf("digit");
    }
    else{
        printf("special character");
    }
    return 0;
}