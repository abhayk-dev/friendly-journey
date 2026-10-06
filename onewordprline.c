#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    int in_word = 0; // State variable: 1 if inside a word, 0 if outside

    // Read input character by character until End of File
    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            // If we hit whitespace and were inside a word, the word has ended
            if (in_word) {
                putchar('\n');
                in_word = 0; // Switch state to outside a word
            }
            // If we were already outside a word, skip extra whitespace
        } else {
            // If it's a non-whitespace character, print it
            putchar(c);
            in_word = 1; // Switch state to inside a word
        }
    }
    
    // Edge case: If the input ended abruptly without a trailing newline,
    // ensure the last word gets its closing newline.
    if (in_word) {
        putchar('\n');
    }
    
    return 0;
}
