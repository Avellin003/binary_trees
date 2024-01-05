#include "binary_trees.h"

/**
 * binary_tree_nodes - fn counts nodes with atmost 2 child
 * @tree: pointer to the node to see
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->right != NULL || tree->left != NULL)
			return (1 + binary_tree_nodes(tree->right) +
				binary_tree_nodes(tree->left));
	}
	else if (!tree)
		return (0);
	return (0);
}
