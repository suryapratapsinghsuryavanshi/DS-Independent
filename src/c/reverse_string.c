#include <stdio.h>

void rev(char str[], int size) {
    for(int i = size; i >= 0; i--) {
        printf("%c", str[i]);
    }
} 

int main() {
    char str[20] = "This is a string.";
    rev(str, 20);
}
