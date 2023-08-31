#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is root
 * @node: pointer to node to check
 * Return: 1 if true, 0 if false or @node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL);
}
