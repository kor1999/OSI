#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct linked_list {
    struct node* head;
    int size;
};

void print_list(struct linked_list* list) {
    struct node* curr = (*list).head;
    int i;
    for (i = 0; i < (*list).size; i++) {
        printf("%d ", curr -> data);
        curr = curr -> next;
    }
    printf("\n");
}

void insert_node(struct linked_list* list, int data) {
    struct node* curr = (*list).head;
    if ((*list).size == 0) {
        (*list).head = malloc(sizeof((*list).head));
        (*list).head -> data = data;
        (*list).head -> next = NULL;
    }
    else {
        int i;
        for (i = 1; i < (*list).size; i ++) {
            curr = curr -> next;
        }
        curr -> next = malloc(sizeof(curr -> next));
        curr -> next -> data = data;
        curr -> next -> next = NULL;
    }
    (*list).size++;
}

void delete_node(struct linked_list* list, int data) {
    struct node* curr = (*list).head;
    if (curr -> data == data) {
        if (curr -> next == NULL) {
            (*list).head = NULL;
            return;
        }
    }
    int i;
    for (i = 0; i < (*list).size - 1; i++) {
        if (curr -> next -> data == data) {
            if (curr -> next -> next == NULL) {
                curr -> next = NULL;
                return;
            }
            else {
                curr -> next = curr -> next -> next;
                return;
            }
        }
    }
}

int main() {
    struct linked_list list;
    list.size = 0;
    list.head = NULL;

    insert_node(&list, 8);
    insert_node(&list, 6);
    insert_node(&list, 86);

    print_list(&list);

    delete_node(&list, 6);

    print_list(&list);

    return 0;
}
