/*Q91: Remove all vowels from a string.*/
#include <stdio.h>
#include <strings.h>
int main(){
    char r[100]={0};
    printf("enter your string:\n");
    fgets(r,sizeof(r),stdin);
    char s[100]={0};
    int j=0;
    for(int i=0;r[i]!='\0';i++){
        if(r[i]!='a' && r[i]!='A' && r[i]!='e'&& r[i]!='E' && r[i]!='i' && r[i]!='I' && r[i]!='o' && r[i]!='O' && r[i]!='u'&& r[i]!='U'){
            s[j]=r[i];
            j++;
        }
    }
    s[j]='\0';
    printf("%s",s);
    return 0;
}