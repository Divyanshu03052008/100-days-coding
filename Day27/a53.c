/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main(){
    int n=1;
    for(int i=0;i<=8;i++){
        if(n==6){
            for(int j=1;j<=7;j++){
                printf("*");
            }   
            printf("\n"); 
        }
        if(n==7){
            for(int j=1;j<=5;j++){
                printf("*");
            }
            printf("\n"); 
        }
        if(n==8){
            for(int j=1;j<=3;j++){
                printf("*");
            }
            printf("\n"); 
        }    
        if(n==9){
            for(int j=1;j<=1;j++){
                printf("*");
            } 
            printf("\n"); 
        }       
        if(i==0 && n==1){
            for(int j=i;j<=i;j++){
                printf("*\n");
            }   

        }       
        if(i>0 && n>1 && i<=4 && n<=5){
            for(int j=1;j<=n+i;j++){
                printf("*");
        
            }
            printf("\n");
        }
        n++;
    }
    return 0;
}

