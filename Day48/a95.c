/*Q95>.Check if one string is rotation of other. */
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    // Check if lengths are equal
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    
    // Concatenate s1 with itself
    strcpy(temp, s1);
    strcat(temp, s1);
    
    // Check if s2 is a substring of temp
    if (strstr(temp, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}
