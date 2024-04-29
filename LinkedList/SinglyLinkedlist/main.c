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
void remove_end(node_t **head) {
  if (*head == NULL) {
    printf("The list is empty");
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
void add_first(node_t **head, int val, char *name) {
  if (*head == NULL) {
    *head = malloc(sizeof(node_t));
    (*head)->val = val;
    (*head)->name = name;
    (*head)->next = NULL;
    return;
  }
  node_t *new_head = malloc(sizeof(node_t));
  new_head->val = val;
  new_head->next = *head;
  *head = new_head;
}
void print(node_t *head) {
  if (head == NULL) {
    printf("The list is empty\n");
    return;
  }
  node_t *current = head;
  while (current != NULL) {
    printf("%d ", current->val);
    current = current->next;
  }
  printf("\n");
}
int main(int argc, char *argv[]) {

  node_t *head = NULL;

  print(head);

  add_start(&head, 5, "July");
  add_end(&head, 6, "Juan");
  add_end(&head, 7, "Pedro");
  add_end(&head, 8, "Fernando");

  print(head);

  remove_end(&head);

  print(head);

  add_first(&head, 4, "Jose");

  print(head);

  add_start(&head, 3, "Maria");

  print(head);
  return 0;
}
