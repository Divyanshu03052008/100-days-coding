/*Q98>.Print the intial of name with surname displayed with full.*/ 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    int len = strlen(name);
    int lastSpace = -1;

    // Find the position of the last space
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials for everything before the surname
    if (lastSpace != -1) {
        if (name[0] != ' ') {
            printf("%c.", toupper(name[0]));
        }
        for (int i = 1; i < lastSpace; i++) {
            if (name[i - 1] == ' ' && name[i] != ' ') {
                printf("%c.", toupper(name[i]));
            }
        }
        // Print the surname in full
        printf(" %s\n", &name[lastSpace + 1]);
    } else {
        // Only one name entered
        printf("%s\n", name);
    }

    return 0;
}
