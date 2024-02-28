#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *p;

	if (tree == NULL || tree->left == NULL)
	{
		return (tree);
	}
	p = tree->left;
	tree->left = p->right;
	if (p->right != NULL)
	{
		p->right->parent = tree;
	}
	p->parent = tree->parent;
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
		{
			tree->parent->left = p;
		}
		else
		{
			tree->parent->right = p;
		}
	}
	p->right = tree;
	tree->parent = p;
	return (p);
}
