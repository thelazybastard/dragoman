#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "binary.h"
#include "hexadecimal.h"
#include "octal.h"

int main(void) {
    char *user_input;
    printf("What would you like to convert decimal to (b, h, o): ");
    fgets(user_input, sizeof(user_input), stdin);

    int user_num;
    printf("Enter number (no real numbers, integers only): ");
    scanf("%d", &user_num);
    

    switch (tolower(user_input[0])) {
        case 'b':
            binary_conversion(user_num);
            break;
        case 'h':
            hexadecimal_conversion(user_num);
            break;
        case 'o':
            octal_conversion(user_num);
        default:
            puts("Invalid argument. Try b for binary, h for hexadecimal, and o for octal, conversion");
            return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
