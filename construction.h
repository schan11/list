#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H

// creates struct
struct bubbletea{
    int price;
    char size[256];
    char flavor[256];
    struct bubbletea *next;
};

void print_bubbletea(struct bubbletea *b);
struct bubbletea *new_bubbletea(int p, char *s, char *f);
void modify_bubbletea(struct bubbletea *b, int np);
void print_list(struct bubbletea *b);
struct bubbletea *insert_front(struct bubbletea *first, int price, char size[], char flavor[]);
struct bubbletea *free_list(struct bubbletea *b);
struct bubbletea *remove_node(struct bubbletea *b, int price, char size[], char flavor[]);

#endif
