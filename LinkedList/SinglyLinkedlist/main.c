#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int val;
  char *name;
  struct node *next;
} node_t;

void add_end(node_t **head, int value, char *string) {
  node_t *current = *head;
  if (*head == NULL) {
    *head = malloc(sizeof(node_t));
    (*head)->val = value;
    (*head)->next = NULL;
    return;
  } else {
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = malloc(sizeof(node_t));
    current->next->val = value;
    current->next->next = NULL;
  }
}

void add_start(node_t **head, int value, char *name) {
  node_t *new_head = malloc(sizeof(node_t));
  new_head->val = value;
  new_head->name = name;
  new_head->next = *head;
  *head = new_head;
}

void insert(node_t **head, int value, char *name, int i) {
  // TODO:
}
void del(node_t** head, int value, char* name, int i){
  // TODO:
}
void remove_end(node_t **head) {
  if (*head == NULL) {
    printf("The list is empty");
    return;
  } else if ((*head)->next == NULL) {
    printf("Deleting the last element\n");
    *head = NULL;
    return;
  }
  node_t *current = *head;
  node_t *prev;
  while (current->next != NULL) {
    prev = current;
    current = current->next;
  }
  prev->next = NULL;
  free(current);
}
void remove_start(node_t **head){
// TODO:
}

void print(node_t *head) {
  if (head == NULL) {
    printf("The list is empty\n");
    return;
  }
  node_t *current = head;
  while (current != NULL) {
    printf("1: %s ", current->name);
    printf("%d\n", current->val);

    current = current->next;
  }
  printf("\n");
}
void recursive_print(node_t* head){
  // TODO:
}
void sort(node_t** head){
  // TODO:
}
int main(int argc, char *argv[]) {

  node_t *head = NULL;

  print(head);

  add_start(&head, 6, "July");
  // add_end(&head, 6, "Juan");
  // add_end(&head, 7, "Pedro");
  // add_end(&head, 8, "Fernando");
  add_start(&head, 5, "July");

  print(head);

  remove_end(&head);

  print(head);

  remove_end(&head);

  print(head);

  add_start(&head, 4, "Jose");

  print(head);

  add_start(&head, 3, "Maria");

  print(head);
  return 0;
}
