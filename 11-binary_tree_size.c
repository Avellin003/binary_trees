#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of tree
 * @tree: pointer to the root node to traverse
 * Return: tracker or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		int tracker;
		size_t left, right;

		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		tracker = left + right + 1;
		return (tracker);
	}
	else
		return (0);
}
