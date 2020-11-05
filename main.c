#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "construction.h"

int main(){
    srand(time(NULL));

    struct bubbletea *list = NULL;
    printf("Printing empty list: \n");
    print_list(list); // list should be empty
    
    printf("\nAdding new orders to list: \n");
    struct bubbletea *pgt = insert_front(list, rand()%500000, "Medium", "Peach Green Tea");
    struct bubbletea *pft = insert_front(pgt, rand()%500000, "Large", "Passionfruit Tea");
    struct bubbletea *basic = insert_front(pft, rand()%500000, "Small", "Milk Tea");
    struct bubbletea *oo = insert_front(basic, rand()%500000, "Medium", "Oolong Tea");
    struct bubbletea *bt = insert_front(oo, rand()%500000, "Large", "Black Tea");
    print_list(bt); // list should now contain data

    printf("\nFreeing list\n");
    bt = free_list(bt);
    print_list(bt);
    
    printf("\nRemoving order: \n");
    bt = remove_node(bt, pft -> price, pft -> size, pft -> flavor);
    print_list(bt);
    
    printf("\nRemoving order: \n");
    bt = remove_node(bt, oo -> price, oo -> size, oo -> flavor);
    print_list(bt);
                    
}

