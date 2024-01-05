#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds bro of a node in a binary tree
 * @node: Pointer to the node to find the bro
 * Return: Pointer to bro else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

