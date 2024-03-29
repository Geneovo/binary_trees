#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a given node is a root
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0 and 0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
