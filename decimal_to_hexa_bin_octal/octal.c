#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void octal_conversion(int num) {
    node *current_ptr = NULL;

    while (true) {
        if (num == 0) {
            break;
        }

        int remainder = num % 8;
        num /= 8;

        node *new_node = malloc(sizeof(node));
        new_node->value = remainder;
        new_node->next = current_ptr;
        current_ptr = new_node;
    }

    printf("The result in octal is: ");
    while (current_ptr != NULL) {
        printf("%d", current_ptr->value);
        current_ptr = current_ptr->next;
    }
    printf("\n");
}
