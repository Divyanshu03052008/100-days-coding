/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%
Input 2:
1000 800
Output 2:
Loss 20%
Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include <stdio.h>
int main(){
    int cp,sp;
    printf("enter costprice and sellingprice:");
    scanf("%d %d",&cp,&sp);
    int p=sp-cp;
    int l=cp-sp;
    if(cp>sp){
        printf("Loss %d percent",(l*100)/cp);    
    }
    else if(sp>cp){
        printf("Profit %d percent",(p*100)/sp);
    }else{
        printf("No profit and No loss");
    }
    return 0;

}