/*Q88: Replace spaces with hyphens in a string.
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world*/
#include <stdio.h>
int main(){
    char s[100];
    printf("enter your string:");
    scanf("%[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            s[i]='-';
        }
    }
    printf("%s\n",s);
    return 0;

}