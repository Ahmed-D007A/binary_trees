#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree.
 * @tree: the given tree to be deleted.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
