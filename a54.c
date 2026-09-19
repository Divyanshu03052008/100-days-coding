/*Q54: Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
Sample Test Cases:
Input 1:
Output 1:
Pattern with layers of stars as shown.
*/
#include <stdio.h>
int main(){
    int n=1;
    if(n>0 && n<=4){
        for(int i=0;i<=3;i++){
            for(int j=0;j<4-n;j++){
                printf(" ");
            }
            for(int j=0;j<2*i+1;j++){
            printf("*");
            }
            printf("\n");
            n++;
        }    
    }
    if(n>4 && n<=7){
        for(int k=0;k<=3;k++){
            for(int j=0;j<n-4;j++){
                printf(" ");
            }
            for(int j=0;j<5-(k*2);j++){
                printf("*");
                
            }
            printf("\n");
            n++;
        }
    }
    return 0;
}