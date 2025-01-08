#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the
 *	balance factor.
 *
 * Return: balance factor of binary tree, otherwise 0 is tree is NULL.
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftHeight = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		rightHeight = binary_tree_balance(tree->right) + 1;

	return (leftHeight - rightHeight);
}
