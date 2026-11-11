/*Q92: Find the first repeating lowercase alphabet in a string.
*/
#include <stdio.h>
#include <strings.h>
int main(){
    char p[100]={0};
    printf("enter your string:\n");
    fgets(p,sizeof(p),stdin);
    int freq=0;
    char d ={0};
    int j=0;
    for(int i=0;p[i]!='\0';i++){
        if(p[i]>='a' && p[i]<='z'){
            if(p[i]==p[i+1]){
                freq++;
                d=p[i];
                break;
            }
        }
    }
    printf("%c\n",d);
    return 0;
}