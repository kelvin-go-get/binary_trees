#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *p;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	p = tree->right;
	tree->right = p->left;
	if (p->left != NULL)
	{
		p->left->parent = tree;
	}
	p->parent = tree->parent;
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
		{
			tree->parent->left = p;
		}
	}

	p->left = tree;
	tree->parent = p;
	return (p);
}
