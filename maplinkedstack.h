#include"mapdef.h"
#ifndef _MAP_LINKED_STACK_
#define _MAP_LINKED_STACK_

typedef struct StackNodeType {
	MapPosition data;
	struct StackNodeType* pLink;
}StackNode;

typedef struct LinkedStackType {
	int currentElementCount;
	StackNode* pTopElement;
}LinkedStack;

LinkedStack* createLinkedStack();
int pushLS(LinkedStack* pStack, StackNode element);
StackNode* popLS(LinkedStack* pStack);
StackNode* peekLS(LinkedStack* pStack);
void deleteLinkedStack(LinkedStack *pStack);
int isLinkedStackFull(LinkedStack* pStack);
int isLinkedStackEmpty(LinkedStack* pStack);
#endif

#ifndef _COMMON_STACK_DEF_
#define _COMMON_STACK_DEF_

#define TRUE 1
#define FALSE 0

#endif