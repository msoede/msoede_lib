#include <stdio.h>

int main() {
    int c, bl;
    bl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
	    printf("\\t");
        } else if (c == '\\') {
            printf("\\b");
        } else {
            printf("%c", c);
        }


    }
    return 0;
}
