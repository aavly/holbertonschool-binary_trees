#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 *				of another node.
 *
 * @parent: pointer to the node to insert right-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to created node or NULL on failure
 *		or if parent if NULL.
 * If parent already has a right-child, the new node must
 * take its place and the old right-child must be set as
 * the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		newTreeNode->right = parent->right;
		parent->right->parent = newTreeNode;
	}

	parent->right = newTreeNode;

	return (newTreeNode);
}
