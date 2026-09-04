/*Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)
Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/
# include <stdio.h>
int main(){
    int a,rem=0,prod=1;
    printf("enter your no:");
    scanf("%d",&a);
    if(a==0){
        prod=1;
        printf("%d (no odd digits,assume 1)",prod);
    }

    while(a>0){
        rem=a%10;
        if(rem%2 != 0){
            prod=prod*rem;
        }
        a=a/10;
    }
    printf("product of odd digits of a no:%d",prod);
    return 0;
}