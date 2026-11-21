/*Q40: Write a program to find the 1’s complement of a binary number and print it.
Sample Test Cases:
Input 1:
1010
Output 1:
0101
Input 2:
1111
Output 2:
0000*/
#include <stdio.h>
int main(){
    int n,rem;
    int compl=0;
    int place=1;
    printf("enter your binary no:");
    scanf("%d",&n);
    if(n==0){
        printf("1's complement: 1");
        return 0;
    }
    int temp=n;
    while(temp>0){
        rem=temp%10;
        if(rem!=0 && rem!=1){
            printf("Invalid binary no");
            return 0;
        }
        if(rem==0){
            rem=1;
        }else{
            rem=0;
        }
        compl=compl+rem*place;
        place=place*10;
        temp=temp/10;
    }
    printf("1's compliment: %d",compl);
    return 0;
    
     
}
