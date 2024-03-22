#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int val;
  struct node *next;
} node_t;

void print(node_t *node){
  node_t *current = node;
  while(current != NULL){
    printf("%d, ", current->val);
    current = current->next;
  }
}
int main(int argc, char *argv[]) {
  printf("Hello, world!\n");

  node_t *head = NULL;
  head = (node_t *)malloc(sizeof(node_t));

  head->val = 1;
  head->next = (node_t *)malloc(sizeof(node_t));
  head->next->val = 2;
  head->next->next = (node_t *)malloc(sizeof(node_t));
  head->next->next->val = 3;

  print(head);
}
