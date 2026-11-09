//Q> Print each character of a string on a new line.//
#include <stdio.h>
int main(){
    char ch[50];
    printf("enter your string:");
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++){
        printf("%c\n",ch[i]);
    }
    return 0;
}
