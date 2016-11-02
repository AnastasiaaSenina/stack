#ifndef INCLUDE_STACK_H_
#define INCLUDE_STACK_H_

#include <conio.h>
#include <stdio.h>
struct CNode {
  int data;
  CNode* next;
};
class stack {
  CNode *top;
  int count;
  int max;
 public:
  stack() { top = 0; max = 5; count = 0; }
  bool push(int x);
  int& GetTop();
  bool pop();
  int min();
  int getcount() { return count;}
  void print();
};
#endif  // INCLUDE_STACK_H_
