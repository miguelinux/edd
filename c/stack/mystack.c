#include "mystack.h"


bool push(Node **stack, void data){
  Node *node;
  node = (Node *) malloc( sizeof(Node) );
  if (node == NULL) return false;

  node->data = data;
  node->next = *stack;
  *stack = node;
}

bool pop(Node **stack, void *data){
  Node *toDelete;
  if ( !(toDelete = *stack) ) return false;

  *data  = *stack->data;
  *stack = *stack->next;
  free(toDelete);
}

