#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of tree
 * @tree: pointer to the root node to traverse
 * Return: 0 if success else NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		int counter = 0;

		if (tree->parent)
			counter = 1 + binary_tree_depth(tree->parent);
		return (counter);
	}
	return (0);
}
