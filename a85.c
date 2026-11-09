//Q85>Reverse a string.//
#include <stdio.h>
int main(){
    char n[20];
    printf("enter your string:");
    scanf("%s",n);
    int count=0;
    for(int i=0;n[i]!='\0';i++){
        count++;
    }
    int i=count;
    while(i>=0){
        printf("%c",n[i]);
        i--;
    }
    return 0;
}