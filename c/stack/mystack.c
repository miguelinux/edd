#include "mystack.h"

bool push(Node **stack, void *data){
  Node *node;
  node = (Node *) malloc( sizeof(Node) );
  if (!node) return false;

  node->data = data;
  node->next = *stack;
  *stack = node;
  return true;
}

bool pop(Node **stack, void **data){
  Node *toDelete;
  if ( !(toDelete = *stack) ) return false;

  *data  = toDelete->data;
  *stack = toDelete->next;
  free(toDelete);
  return true;
}

bool createStack (Node **stack){
  *stack = NULL;
  return true;
}

bool deleteStack (Node **stack){
  Node *next;
  while (*stack) {
    next = (*stack)->next;
    free(*stack);
    *stack = next;
  }
  return true;
}


