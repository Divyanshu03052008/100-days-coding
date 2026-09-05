/* Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3
Input 2:
5
Output 2:
Approximate sum: 4.4*/
#include<stdio.h>
int main(){
    int n;
    float sum=0.0,num=0.0,dem=0.0;

    printf("enter your no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1){
            sum=sum+i;
        }
        num=i*2-1;
        dem=i*2;
        sum=sum+num/dem;
    }
    printf("%f",sum);
    return 0;

}