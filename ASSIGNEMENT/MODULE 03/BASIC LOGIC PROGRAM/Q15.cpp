//Q(15) Convert school’s name in abbreviated for....

#include <stdio.h>
#include <ctype.h>

void abbreviate(char *full_name, char *abbrev) {
    int j = 0;
    for (int i = 0; full_name[i] != '\0'; i++) {
        if (i == 0 || (full_name[i - 1] == ' ' && full_name[i] != ' ')) {
            abbrev[j++] = toupper(full_name[i]);
        }
    }
    abbrev[j] = '\0';
}

int main() {
    char full_name[100];
    char abbrev[100];

    printf("Enter the full name of the school: ");
    fgets(full_name, sizeof(full_name), stdin);

    // Remove the newline character from the input
    size_t length = strlen(full_name;
    if (full_name[length - 1] == '\n') {
        full_name[length - 1] = '\0';
    }

    abbreviate(full_name, abbrev);

    printf("Abbreviated form: %s\n", abbrev);

    return 0;
}
