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
 * binary_tree_balance - balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_ht(tree->left);
	right_height = binary_tree_ht(tree->right);

	return (left_height - right_height);
}

