
/*Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1:
3
Output 1:
9
Input 2:
5
Output 2:
25
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }else{
            continue;
        }
    }
    printf("sum of n odd no's:%d",sum);
    return 0;
}