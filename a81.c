//Q81>Count characters in a string without using build_in length functions.//
#include <stdio.h>
int main(){
    char str[50];

    printf("enter your string:");
    scanf("%s", str);
    int count=0;
    while(str[count]!='\0'){
        count++;

    }
    printf("the number of characters in the string:%d\n",count);
    return 0;
}