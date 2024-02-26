#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lt = 0, rt = 0;

		lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lt > rt) ? 1 : rt);
	}
	return (0);
}
