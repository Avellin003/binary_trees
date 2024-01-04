#include "binary_trees.h"
/**
 * binary_tree_insert_left - function inserts to left child node
 * @parent: pointer to the parent node
 * @value: value to be stored at level node
 * Return: pointer to create node or NULL if failure or parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	parent->left = new;

	return (new);
}
