#include "binary_trees.h"

/**
 * is_tree_perfect - recursively checks if binary tree is perf.
 *
 * @tree: pointer to the current node.
 * @depth: depth of the leftmost leaf.
 * @level: current level of node.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int is_tree_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (level == depth);

	if (!tree->left || !tree->right)
		return (0);

	return (is_tree_perfect(tree->left, depth, level + 1) &&
		is_tree_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect.
 *
 * @tree: pointer to the root node of the tree.
 *
 * Return: 1 is the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0, level = 0;
	const binary_tree_t *node;

	if (!tree)
		return (0);

	node = tree;

	while (node)
	{
		depth++;
		node = node->left;
	}

	if (depth == 1 && !tree->left && !tree->right)
		return (1);

	return (is_tree_perfect(tree, depth-1, level));
}
