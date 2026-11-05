#include <stdio.h>

// 1. Corrected function prototype to match the definition
void temp(float fahr, float celsius);

int main() {
    // 2. Added initial arguments since the function expects them
    temp(0.0, 0.0); 
    return 0;
}

// 3. Fixed the spelling of 'celsius' in the parameters
void temp(float fahr, float celsius) {
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    while (fahr <= upper) {
        // 4. Uniformly using 'celsius' inside the loop
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
} // 5. Added the missing closing brace
