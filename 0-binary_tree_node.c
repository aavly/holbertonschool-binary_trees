#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node of node to create.
 * @value: value to assign to new node
 *
 * Return: pointer to new node, otherwise NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode;

	newTreeNode = malloc(sizeof(binary_tree_t));
	if (newTreeNode == NULL)
		return (NULL);

	newTreeNode->n = value;
	newTreeNode->left = NULL;
	newTreeNode->right = NULL;


	return(newTreeNode);
}
