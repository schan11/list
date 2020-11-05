#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "construction.h"

// prints out variables of struct type
void print_bubbletea(struct bubbletea *b){
    printf("Flavor: %s\tSize: %s\tPrice: %d\t", b -> flavor, b -> size, b -> price);
}

// creates new struct in heap memory
struct bubbletea *new_bubbletea(int p, char *s, char *f) {
    
    struct bubbletea *nb;
    
    nb = malloc(sizeof(struct bubbletea));
    strncpy(nb -> flavor, f, sizeof(nb -> flavor) - 1);
    strncpy(nb -> size, s, sizeof(nb -> size) - 1);
    nb -> price = p;

    return nb;
}

// modifies values of struct type
void modify_bubbletea(struct bubbletea *b, int np){
    b -> price = np;
    printf("Flavor: %s\tSize: %s\tPrice: %d\t", b -> flavor, b -> size, b -> price);
}

// takes a pointer to a node struct, prints out all of the data in list
void print_list(struct bubbletea *b){
    while (b != NULL){
        print_bubbletea(b);
        b = b -> next;
    }
}

// takes a pointer to existing list and the data to be added, creates a new node, puts it at beginning of list
struct bubbletea *insert_front(struct bubbletea *first, int price, char size[], char flavor[]){
    struct bubbletea *b = new_bubbletea(price, size, flavor);
    b -> next = first;
    return b;
}

// frees nodes
struct bubbletea *free_list(struct bubbletea *b){ // takes a pointer to a list as a parameter
    int node = 0;
    while (b != NULL){ // goes through entire list
        printf("Freeing node: %d\n", node++);
        free(b); // frees each node
        b = b -> next;
    }
    return NULL;
}

// removes node containing data from the list
struct bubbletea *remove_node(struct bubbletea *b, int price, char size[], char flavor[]){
    struct bubbletea *first = b;
    while (b != NULL){
        if (strcmp(b -> size, size) == 0  && strcmp(b -> flavor, flavor) == 0 && b -> price == price){
            free(b);
        }
        b = b -> next;
    }
    return first;
}

