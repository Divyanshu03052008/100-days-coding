/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
Sample Test Cases:
Input 1:
Output 1:
Pattern with stars spaced irregularly as shown.*/
#include <stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        if(i==2){
            for(int j=0;j<=4;j++){
                printf("*\n");
            }
            printf("\n");
        }
        if(i==0||i==1){
        for(int j=5-2*i;j<=5;j++){
            printf("*\n");
        }
        printf("\n");
        }
        if(i==3){
            for(int j=i;j>=1;j--){
                printf("*\n");
            }
            printf("\n");
        }
        if(i==4){
            for(int j=i;j>=4;j--){
                printf("*\n");
            }
            printf("\n");
        }
    }
    return 0;
}