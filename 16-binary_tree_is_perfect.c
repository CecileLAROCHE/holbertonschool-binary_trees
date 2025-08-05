#include "binary_trees.h"

/**
 * find_depth - Finds the depth of the leftmost leaf
 * @tree: Pointer to the root node
 *
 * Return: Depth (number of levels - 1)
 */
size_t find_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth - 1);
}

/**
 * is_perfect_recursive - Recursively checks if the tree is perfect
 * @tree: Pointer to the current node
 * @depth_attendue: Depth expected for all leaves
 * @current_depth: Depth of the current node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth_attendue,
						size_t current_depth)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (current_depth == depth_attendue);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (
		is_perfect_recursive(tree->left, depth_attendue, current_depth + 1) &&
		is_perfect_recursive(tree->right, depth_attendue, current_depth + 1)
	);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = find_depth(tree);
	return (is_perfect_recursive(tree, depth, 0));
}
