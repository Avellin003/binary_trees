#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts to left child node
 * @parent: pointer to the parent node
 * @value: value to be stored at level node
 * Return: pointer to create node or NULL if failure or parent NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
		parent->right = new;

	else
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}

	return (new);
}
