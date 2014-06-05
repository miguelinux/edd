#ifndef MYSTACK_H
#define MYSTACK_H

/**
struct _Node {
  struct _Node *next;
  int data;
}; 

typedef struct _Node Node;
typedef int          entero;
**/

typedef struct _Node {
  struct _Node *next;
  void *data;
} Node; 

/** para que se parezca a C++ **/
typedef int bool;
typedef 1 true;
typedef 0 false;

/** Prototipo de funciones **/
bool push(Node **stack, void  *data);

bool pop (Node **stack, void **data);

bool createStack (Node **stack);

bool deleteStack (Node **stack);


#endif

