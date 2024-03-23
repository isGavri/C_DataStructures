#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int val;
  struct node *next;
} node_t;

void insert(node_t **al){

}
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
  
  print(head);
}
