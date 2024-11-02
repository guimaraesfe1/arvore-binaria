#include <stdio.h>
#include <stdlib.h>
#include "createNode.h"

int main(int argc, char const *argv[]) {
	struct Btree *root = NULL, *temp;
	int value;

	for(;;) {
		temp = root;

		printf("Insira valores na arvore [0 para sair]: ");
		scanf("%d", &value);

		if (!value) break;

		struct Btree *newNode = createNode(value);

		if (root == NULL) {
			root = newNode;
			continue;
		}

		for (;;) {
			if (newNode->value > temp->value) {
				if (temp->right == NULL) {
					temp->right = newNode;
					break;
				}
				temp = temp->right;
				continue;
			}

			if (temp->left == NULL) {
				temp->left = newNode;
				break;
			}

			temp = temp->left;
		}
	}

	return 0;
}
