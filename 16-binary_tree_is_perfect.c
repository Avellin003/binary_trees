#include "binary_trees.h"

/**
 * binary_tree_ht - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the binary tree, -1 if tree is NULL
 */

int binary_tree_ht(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_ht(tree->left);
	right_height = binary_tree_ht(tree->right);

	return ((left_height > right_height ?
			left_height : right_height) + 1);
}

/**
 * binary_tree_sze - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Size of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_sze(const binary_tree_t *tree)
{
	size_t n_left;
	size_t n_right;

	if (tree == NULL)
		return (0);

	n_left = binary_tree_sze(tree->left);
	n_right = binary_tree_sze(tree->right);

	return (1 + n_left + n_right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t pf;
	size_t height;
	size_t size;

	if (tree == NULL)
		return (0);

	height = binary_tree_ht(tree);
	pf = (1 << (height + 1)) - 1;
	size = binary_tree_sze(tree);

	if (pf == size)
		return (1);
	else
		return (0);
}

