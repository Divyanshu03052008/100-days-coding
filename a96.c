/*/Q96>.Reverse each word in a sentence without changing the word order*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    char *word_start = str;
    char *temp = str;

    while (*temp) {
        temp++;
        if (*temp == ' ' || *temp == '\0') {
            reverseWord(word_start, temp - 1);
            word_start = temp + 1;
        }
    }

    printf("Output: %s\n", str);
    return 0;
}