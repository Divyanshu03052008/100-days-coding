//Q84>Convert a lowercase string to uppercase without using built in functions.//
# include <stdio.h>
int main(){
    char st[50];
    printf("enter your lowercase string:");
    scanf("%s",st);
    for(int i=0;st[i]!='\0';i++){
        if(st[i]>='a'&& st[i]<='z'){
            st[i]-=32;
        }
    }
    printf("%s",st);
}