//Q> Count vowels and consonants in a string.//
#include <stdio.h>
int main(){
    char a[50];
    printf("enter your string:");
    scanf("%s",a);
    int count_v=0;
    int count_c=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
            count_v++;
        }
        else if((a[i]>='a'&& a[i]<='z')||(a[i]>='A'&& a[i]<='Z')){
            count_c++;
        }
    }
    printf("vowels:%d\n",count_v);
    printf("consonants:%d",count_c);
    
    return 0;
    
    
}