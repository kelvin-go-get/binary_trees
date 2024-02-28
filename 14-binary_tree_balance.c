#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree, or 0 if the tree is NULL
 */

int height(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = height(tree->left) + 1;
	right_h = height(tree->right) + 1;

	if (left_h > right_h)
	{
		return (left_h);
	}
	return (right_h);
}
