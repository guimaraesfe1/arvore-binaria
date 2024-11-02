#ifndef CREATE_NODE_H
#define CREATE_NODE_H

struct Btree {
	int value;
	struct Btree *left, *right;
};

struct Btree *createNode (int value);

#endif // CREATE_NODE_H