#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int val;
  struct node *next;
} node_t;

int add_end(node_t *head, int value) {
  node_t *current = head;
  if (current->val == 0) {
    current->val = value;
    current->next = NULL;
  } else {
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = malloc(sizeof(node_t));
    current->next->val = value;
    current->next->next = NULL;
  }
  return current->val;
}
int remove_end(node_t *head) {
  node_t *current = head;
  node_t *prev;
  while (current->next != NULL) {
    prev = current;
    current = current->next;
  }
  int removed_elem = current->val;
  prev->next = NULL;
  free(current);
  return removed_elem;
}
int add_first(node_t *head, int val) {
  node_t *new_head = malloc(sizeof(node_t));
  new_head->val = val;
  new_head->next = head;
  head = new_head;
  return val;
}
void print(node_t *head) {
  node_t *current = head;
  while (current != NULL) {
    printf("%d ", current->val);
    current = current->next;
  }
  printf("\n");
}
int main(int argc, char *argv[]) {
  printf("Hello, world!\n");

  node_t *head = malloc(sizeof(node_t));

  add_end(head, 5);
  add_end(head, 6);
  add_end(head, 7);

  print(head);

  remove_end(head);

  print(head);

  add_first(head, 4);

  print(head);
  return 0;
}
