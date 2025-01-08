#include "binary_trees.h"


/**
 * binary_tree_height_again - calculates height of left and right.
 *
 * @tree: pointer to root node of binary tree.
 *
 * Return: balance factor, otherwise 0 if tree is NULL.
 */

int binary_tree_height_again(const binary_tree_t *tree)
{
	int leftHeight = -1;
	int rightHeight = -1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftHeight = binary_tree_height_again(tree->left) + 1;

	if (tree->right)
		rightHeight = binary_tree_height_again(tree->right) + 1;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the
 *	bialance factor.
 *
 * Return: balance factor of binary tree, otherwise 0 is tree is NULL.
 */

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
