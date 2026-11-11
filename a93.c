/*Q93> Check if two strings are anagrams of each other.*/
# include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isanagram_strings(char sr1[100],char sr2[100]);
void sort(char str[]);
void sort(char str[]){
    int n;
    n=strlen(str);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}
int main(){
    char sr1[100]={0};
    printf("enter your string1:\n");
    fgets(sr1,sizeof(sr1),stdin);
    sr1[strcspn(sr1,"\n")]='\0';
    char sr2[100]={0};
    printf("enter your string2:\n");
    fgets(sr2,sizeof(sr2),stdin);
    sr2[strcspn(sr2,"\n")]='\0';
    if(isanagram_strings(sr1,sr2)){
        printf("it is a anagram ");
    }else{
        printf("it is not anagram");
    }
    return 0;
}
bool isanagram_strings(char sr1[100],char sr2[100]){
    if(strlen(sr1)!=strlen(sr2)){
        return false;
    }
    sort(sr1);
    sort(sr2);
    if(strcmp(sr1,sr2)==0){
        return true;
    }else{
        return false;
    }
}