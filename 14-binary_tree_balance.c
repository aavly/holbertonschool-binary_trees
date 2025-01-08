#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the
 *	balance factor.
 *
 * Return: balance factor of binary tree, otherwise 0 is tree is NULL.
 */

int binary_tree_height_again(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = 0;
	rightHeight = 0;

	leftHeight += binary_tree_balance(tree->left);
	rightHeight += binary_tree_balance(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height_again(tree->left);
	rightHeight = binary_tree_height_again(tree->right);

	return (leftHeight - rightHeight);
}
