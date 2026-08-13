#include <stdio.h>

int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void remove_newline(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

void naive_string_match(const char *text, const char *pattern) {
    int text_length = string_length(text);
    int pattern_length = string_length(pattern);
    int found = 0;

    if (pattern_length == 0) {
        printf("Empty pattern is not allowed.\n");
        return;
    }

    for (int i = 0; i <= text_length - pattern_length; i++) {
        int j = 0;

        while (j < pattern_length && text[i + j] == pattern[j]) {
            j++;
        }

        if (j == pattern_length) {
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Pattern not found in text.\n");
    }
}

int main() {
    char text[200];
    char pattern[100];

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    remove_newline(text);

    printf("Enter the pattern to search: ");
    fgets(pattern, sizeof(pattern), stdin);
    remove_newline(pattern);

    naive_string_match(text, pattern);

    return 0;
}
