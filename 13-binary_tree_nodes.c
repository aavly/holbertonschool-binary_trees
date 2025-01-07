#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child.
 *
 * @tree: pointer to the root node of the tree to count
 *	the number of nodes
 *
 * Return: number of nodes, 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesCount;

	if (tree == NULL)
		return (0);

	nodesCount = 0;

	if (tree->left != NULL || tree->right == NULL)
		return (1);

	nodesCount = binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);

	return (nodesCount);
}
