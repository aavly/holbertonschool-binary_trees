#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *				of another node.
 *
 * @parent: pointer to the node to insert left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to created node or NULL on failure
 *		or if parent if NULL.
 * If parent already has a left-child, the new ndoe must
 * take its place and the old left-child must be set as
 * the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode;

	if (parent == NULL)
		return (NULL);

	newTreeNode = malloc(sizeof(binary_tree_t));
	if (newTreeNode == NULL)
		return (NULL);

	newTreeNode->parent = parent;
	newTreeNode->n = value;
	newTreeNode->left = NULL;
	newTreeNode->right = NULL;

	if (parent->left != NULL)
	{
		newTreeNode->left = parent->left;
		parent->left->parent = newTreeNode;
	}

	return (newTreeNode);
}
