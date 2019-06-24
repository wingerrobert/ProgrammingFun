#include <stdio.h>
#include <stdlib.h>
#define MAX 200

typedef struct node{
    int value;
    struct node* next;
} Node;

typedef struct list{
    Node* head;
    Node* nodes[MAX];
} List;

void push_node( Node* node, List* list );
Node* pop_node();

int main(void){
    List* list = NULL;
    list = malloc(sizeof(List));

    if(list == NULL){
        return 1;
    }

    list->head = NULL;
    list->nodes = NULL;
    Node* nodes[] = NULL;

    for (int i = 0; i < MAX; i++){
        nodes[i] = malloc(sizeof(Node));
        if (node[i] == NULL){
            return 1;
        }
    }

    return 0;
}