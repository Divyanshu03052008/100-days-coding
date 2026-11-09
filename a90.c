/*Q90: Toggle case of each character in a string.
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO*/
#include <stdio.h>
#include <strings.h>
int main(){
    char sr[100]={0};
    printf("enter your string:\n");
    fgets(sr,sizeof(sr),stdin);
    for(int i=0;sr[i]!='\0';i++){
        if(sr[i]>='A' && sr[i]<='Z'){
            sr[i]=sr[i]+32;  
        }
        else if(sr[i]>='a' && sr[i]<='z'){
            sr[i]=sr[i]-32;
        }
    }
    printf("%s\n",sr);
    return 0;
}