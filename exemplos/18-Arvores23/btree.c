#include <stdlib.h>
#include "btree.h"

btree_t *btreeCreate(int minChildren, int maxChildren) {
  btree_t *tree = (btree_t *) malloc(sizeof(btree_t));
  tree->minChildren = minChildren;
  tree->maxChildren = maxChildren;
  return tree;
}

void bInsertValue(btree_t *tree, int value);
int bHasValue(btree_t *tree, int value);
int bRemoveValue(btree_t *tree, int value);
void bFree(btree_t *tree);
