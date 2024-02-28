#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the lowest common ancestor
 * of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ance;

	if (first == NULL || second == NULL)
		return (NULL);
	ance = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = ance;
		first = first->parent;
	}
	return (NULL);
}
