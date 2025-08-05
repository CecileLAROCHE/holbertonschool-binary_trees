#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
	{
		return (1 + left_h);
	}
		else
	{
		return (1 + right_h);
	}
}
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;


	if (tree == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (height_left - height_right);
}
