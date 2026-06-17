#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// create linked list for unknown number of basee 2 digits
typedef struct node {
    int value;
    struct node *next;
} node;

void binary_conversion(int num) {
    node *current_ptr = NULL;

    while (true) {
        if (num == 0) {
            break;
        }

        int remainder = num % 2;
        num /= 2;

        node *new_node = malloc(sizeof(node));
        new_node->value = remainder;
        new_node->next = current_ptr;
        
        current_ptr = new_node;   
    }

    printf("The result in binary is: ");
    while (current_ptr != NULL) {
        printf("%d", current_ptr->value);
        current_ptr = current_ptr->next;
    }
    printf("\n");
}
