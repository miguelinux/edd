#include <stdlib.h>
#include "mystack.h"

bool push(Node **stack, void *data){
  Node *node;
  node = (Node *) malloc( sizeof(Node) );
  if (!node) return FALSE;

  node->data = data;
  node->next = *stack;
  *stack = node;
  return TRUE;
}

bool pop(Node **stack, void **data){
  Node *toDelete;
  if ( !(toDelete = *stack) ) return FALSE;

  *data  = toDelete->data;
  *stack = toDelete->next;
  free(toDelete);
  return TRUE;
}

bool createStack (Node **stack){
  *stack = NULL;
  return TRUE;
}

bool deleteStack (Node **stack){
  Node *next;
  while (*stack) {
    next = (*stack)->next;
    free(*stack);
    *stack = next;
  }
  return TRUE;
}


