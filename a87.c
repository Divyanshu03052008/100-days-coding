//Q87>Count spaces,digits, and special character's in a string.//
#include <stdio.h>
int main(){
    char s1[100];
    printf("enter your string:");
    scanf("%s",s1);
    int spac=0;
    int digit=0;
    int spl=0;
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==' '|| s1[i]=='\n'){
            spac++;
        }else if((s1[i]>='a'&& s1[i]<='z')|| (s1[i]>='A'&& s1[i]<='Z')){
            continue;
        }else if(s1[i]>='0' && s1[i]<='9'){
            digit++;
        }else{
            spl++;
        }
    }
    printf("space:%d\ndigits:%d\nspecial:%d\n",spac,digit,spl);
    return 0;
}