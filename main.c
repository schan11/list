#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "construction.h"

int main(){
    srand(time(NULL));
    
    // rand will randomize the price every time code is run
    struct bubbletea *pgt = new_bubbletea(rand(), "Medium", "Peach Green Tea");
    struct bubbletea *pft = new_bubbletea(rand(), "Large", "Passionfruit Tea");
    struct bubbletea *basic = new_bubbletea(rand(), "Small", "Milk Tea");
    struct bubbletea *oo = new_bubbletea(rand(), "Medium", "Oolong Tea");
    
    // print accordingly
    printf("Messed Up Prices! \n");
    
    printf("Order #1: \n");
    print_bubbletea(pgt);
    
    printf("\nOrder #2: \n");
    print_bubbletea(pft);

    printf("\nOrder #3: \n");
    print_bubbletea(basic);

    printf("\nOrder #4: \n");
    print_bubbletea(oo);

    // ----
    printf("\nChanged Orders: \n");
    
    printf("New Order #1: \n");
    modify_bubbletea(pgt, 5);
    
    printf("\nNew Order #2: \n");
    modify_bubbletea(pft, 3);
    
    printf("\nNew Order #3: \n");
    modify_bubbletea(basic, 7);
    
    printf("\nNew Order #4: \n");
    modify_bubbletea(oo, 4);
    
}

