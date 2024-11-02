#include <stdlib.h>
#include "createNode.h"

struct Btree *createNode (int value) {
	struct Btree *newNode = (struct Btree *) malloc(sizeof(struct Btree));

	newNode->value = value;
	newNode->left = newNode->right = NULL;

	return newNode;
}