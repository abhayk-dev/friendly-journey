#include <stdio.h>

int main(void) {
    printf("Press any key followed by Enter (Testing for 1):\n");
    // While a character is successfully read, this will print 1
    printf("Expression value (Not EOF): %d\n\n", getchar() != EOF);
    
    // Clear the newline character left in the buffer
    getchar(); 

    printf("Press Ctrl+D (Linux/macOS) or Ctrl+Z (Windows) (Testing for 0):\n");
    // When EOF is triggered, this will print 0
    printf("Expression value (Is EOF): %d\n", getchar() != EOF);

    return 0;
}
