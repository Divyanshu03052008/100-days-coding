/*Q94: Find the longest word in a sentence.
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char longestWord[100];
    int maxLen = 0, currentLen = 0;
    int startIndex = 0, maxStartIndex = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);

    for (int i = 0; i <= len; i++) {
        if (isalnum(sentence[i])) {
            if (currentLen == 0) {
                startIndex = i; 
            }
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIndex = startIndex;
            }
            currentLen = 0; 
        }
    }
    strncpy(longestWord, &sentence[maxStartIndex], maxLen);
    longestWord[maxLen] = '\0';

    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", maxLen);

    return 0;
}