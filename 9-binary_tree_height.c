#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of tree
 * @tree: pointer to the root node to traverse
 * Return: 0 if success else NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int right = 0;
		int left = 0;

		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
