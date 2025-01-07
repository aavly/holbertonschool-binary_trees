#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count
 *	the number of leaves.
 *
 * Return: number of leaves in a binary tree, 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesCount;

	if (tree == NULL)
		return (0);

	leavesCount = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leavesCount = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);

	return (leavesCount);
}
