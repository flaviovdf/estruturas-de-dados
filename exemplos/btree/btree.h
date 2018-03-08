#ifndef BT_H
#define BT_H
typedef struct node {
  int *values;
  int numValues;
  struct node *children;
  int numChildren;
} bnode_t;

typedef struct btree {
  bnode_t *root;
  int minChildren;
  int maxChildren;
} btree_t;

btree_t *btreeCreate(int minChildren, int maxChildren);
void bInsertValue(btree_t *tree, int value);
int bHasValue(btree_t *tree, int value);
int bRemoveValue(btree_t *tree, int value);
void bFree(btree_t *tree);
#endif
