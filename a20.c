
/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
Sample Test Cases:
Input 1:
1
Output 1:
Monday
Input 2:
5
Output 2:
Friday
*/
#include <stdio.h>
#include <math.h>
int main(){
    char days;
    printf("enter the no 1-7:");
    scanf("%d",&days);

    switch(days){
        case 1: printf("monday");
        break;
        case 2: printf("tuesday");
        break;
        case 3: printf("wednesday");
        break;
        case 4: printf("thusday");
        break;
        case 5: printf("friday");
        break;
        case 6: printf("saturday");
        break;
        case 7: printf("sunday");
        break;
        default:printf("invalid syntax");
    }
    return 0;

}