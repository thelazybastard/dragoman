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
    int num_store = num;

    while (true) {
        if (num_store == 0) {
            break;
        }

        int remainder = num_store % 2;
        num_store /= 2;

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
