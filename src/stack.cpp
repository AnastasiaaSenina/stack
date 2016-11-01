#include "stack.h"
bool stack::push(int x){
	if (count != max){
		CNode *node = new CNode;
		node->data = x;
		node->next = top;
		top = node;
		count++;
		return true;
	}
	else throw 1;
}
int& stack::GetTop(){
	if (top != 0)
		return top->data;
	else throw 1;
}
bool stack::pop(){
	if (top != 0){
		CNode *s = top;
		top = top->next;
		delete s;
		count--;
		return true;
	}
	else throw 1;
	}
int stack::min(){
	if (top != 0){
		CNode* list = top->next;
		int min = top->data;
		while (list != 0){
			if (min > list->data)
				min = list->data;
			list = list->next;
		}
		return min;
	}
	else throw 1;
	}

void stack::print(){
	if (top != 0){
		CNode* node = top;
		while (node != 0){
			printf("%d  ", node->data);
			node = node->next;
		}
	}
	else printf("stack is empty");
}
