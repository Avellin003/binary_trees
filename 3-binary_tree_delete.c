#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire tree
 * @tree: pointer to the root node of the specified tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
