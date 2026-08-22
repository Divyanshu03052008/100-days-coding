/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1:
a
Output 1:
Vowel
Input 2:
b
Output 2:
Consonant
*/
#include <stdio.h>
#include <math.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}