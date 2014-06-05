#ifndef MYSTACK_H
#define MYSTACK_H

/**
struct _Node {
  struct *_Node;
  int data;
}; 

typedef struct _Node Node;
typedef int          entero;
**/

typedef struct _Node {
  struct *_Node;
  int data;
} Node; 

typedef int bool;

/** Prototipo de funciones **/
bool push(Node **stack, int data);

bool pop(Node **stack, int *data);


#endif

