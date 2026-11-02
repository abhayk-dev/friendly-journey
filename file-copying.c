#include <stdio.h>

int count(void); //fucntion declrtion 

int main(void) { //main fucntion
    count();
    return 0;
}

int count(void) {  
     int c = getchar();



    while (c != EOF) {
       putchar(c);
       c=getchar();
    }

    return 0;
}
