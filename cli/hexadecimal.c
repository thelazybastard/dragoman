#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// create linked list for unknown number of basee 2 digits
typedef struct node {
    char value;
    struct node *next;
} node;

void hexadecimal_conversion(int num) {
    node *current_ptr = NULL;

    while (true) {
        if (num == 0) {
            break;
        }

        bool is_over_10 = false;

        char remainder_over_9;
        int remainder = num % 16;
        switch (remainder) {
            case 10:
                is_over_10 = true;
                remainder_over_9 = 'A';
                break;
            case 11:
                is_over_10 = true;
                remainder_over_9 = 'B';
                break;
            case 12:
                is_over_10 = true;
                remainder_over_9 = 'C';
                break;
            case 13:
                is_over_10 = true;
                remainder_over_9 = 'D';
                break;
            case 14:
                is_over_10 = true;
                remainder_over_9 = 'E';
                break;
            case 15:
                is_over_10 = true;
                remainder_over_9 = 'F';
                break;
        }

        num /= 16;

        node *new_node = malloc(sizeof(node));
        new_node->value = is_over_10 ? remainder_over_9 : remainder;
        new_node->next = current_ptr;
        current_ptr = new_node;
    }

    printf("The result in hexadecimal is: ");
    while (current_ptr != NULL) {
        current_ptr->value >= 10 ? printf("%c", current_ptr->value) : printf("%d", current_ptr->value);
        current_ptr = current_ptr->next;
    }
    printf("\n");
}
