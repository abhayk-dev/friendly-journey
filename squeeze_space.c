#include <stdio.h>
main()
{
  int c;
    int last_c = EOF; // Track the previous character to detect consecutive blanks

    while ((c = getchar()) != EOF) {
        // If the current character is a space, only print it if the last character wasn't a space
        if (c == ' ') {
            if (last_c != ' ') {
                putchar(c);
            }
        } else {
            putchar(c); // Print all non-space characters
        }
        
        last_c = c; // Update the previous character tracker
    }

    return 0;
}
