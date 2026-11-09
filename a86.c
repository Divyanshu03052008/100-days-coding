//Q86>Check if string is a pallindrome.//
#include <stdio.h>
int main(){
    char n[20];
    printf("enter your string:");
    scanf("%s",n);
    int count=0;
    for(int i=0;n[i]!='\0';i++){
        count++;
    }
    int pallindrom=1;
    int i=count-1;
    int j=0;
    while(j<i){
        if(n[j]!=n[i]){
            pallindrom=0;
            break;
        }
        i--;
        j++;
    }
    if(pallindrom==1){
        printf("it is a pallindrome");
    }else{
        printf("it is not a pallindrome");
    }
    return 0;
}