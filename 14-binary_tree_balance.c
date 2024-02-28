#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor. 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. o if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lt = binary_tree_height(tree->left);
		size_t rt = binary_tree_height(tree->right);

		return ((lt > rt) ? 1 + lt : 1 + rt);
	}
	return (0);
}
