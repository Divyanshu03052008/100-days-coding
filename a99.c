/*Q99>.Change the date format from dd/04/yyyy to dd/apr/yyyy.*/
#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm >= 1 && mm <= 12) {
        printf("%02d-%s-%d\n", dd, months[mm], yyyy);
    } else {
        printf("Invalid month\n");
    }

    return 0;
}