#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string (only non-alphabet characters will be stored): \n");
    scanf(" %[^A-Za-z]", str);
    printf("You entered (non-alphabetic characters): %s", str);
    return 0;
}
