#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire bianry tree.
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * if tree is NULL, do nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
