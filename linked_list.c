#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlist_traversal(struct node *ptr){
    int i = 0;
    while(ptr != NULL){
        printf("Element %d of linked list: %d\n",i++,ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct node *head,*first,*second,*third;
    int one,two,three,four;

    head = (struct node*) malloc(sizeof(struct node));
    first = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    printf("Enter the elements of linked list: ");
    scanf("%d%d%d%d", &one, &two, &three, &four);

    head->data = one;
    head->next = first;

    first->data = two;
    first->next = second;

    second->data = three;
    second->next = third;

    third->data = four;
    third->next = NULL;

    linkedlist_traversal(head);
    return 0;
}