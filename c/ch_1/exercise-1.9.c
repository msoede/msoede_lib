#include <stdio.h>

int main() {
    int c, bl;
    bl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            bl++;
        } else if (c == '\n') {
            bl = 0;
        } else {
            bl = 0;
        }
        
        if(bl > 1){
            c = 0;
            
        }

        printf("%c", c);

    }
    return 0;
}
