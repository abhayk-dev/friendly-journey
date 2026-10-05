include <stdio.h>

main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t"); // Prints a literal backslash followed by 't'
        } else if (c == '\b') {
            printf("\\b"); // Prints a literal backslash followed by 'b'
        } else if (c == '\\') {
            printf("\\\\"); // Prints two literal backslashes
        } else {
            putchar(c); // Prints all other characters as they are
        }
    }

    return 0;
}
