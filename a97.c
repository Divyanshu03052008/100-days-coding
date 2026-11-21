/*Q97>.Print the intials of the name.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c.", toupper(name[0]));
    }

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            printf("%c.", toupper(name[i]));
        }
    }

    return 0;
}