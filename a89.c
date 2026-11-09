/*Q89: Count frequency of a given character in a string.*/
#include <stdio.h>
int count_freq(char sr[100],char target);
int main(){
    char sr[100];
    int r;
    char target;
    printf("enter your string:\n");
    scanf("%[^\n]",sr);
    printf("enter your word:");
    scanf(" %c",&target);
    r=count_freq(sr,target);
    printf("%d\n",r);
    return 0;

}
int count_freq(char sr[100],char target){
    int freq=0;
    for(int i=0;i<sr[i]!='\0';i++){
        if(sr[i]==target){
            freq++;

        }
    }
    return freq;
}