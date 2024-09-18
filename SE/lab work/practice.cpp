/*#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

void countCharacterFrequency(const char *str) {
    int frequency[MAX_CHAR] = {0}; // Array to store frequency of each character

    // Iterate through the string and count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char index = (unsigned char)str[i];
        frequency[index]++;
    }

    // Print the frequency of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    countCharacterFrequency(str);

    return 0;
}*/


#include <stdio.h>

#define MAX_CHAR 256

int main() {
    char str[100];
    int frequency[MAX_CHAR] = {0}; // Array to store frequency of each character

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char index = (unsigned char)str[i];
        frequency[index]++;
    }

    // Print the frequency of each character
    printf("Character frequencies:\n");
    for (i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }

    return 0;
}


