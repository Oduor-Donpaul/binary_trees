#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to node to insert left child in
 * @value: value of the left child
 * Return: Pointer to created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n, *temp;

	if (parent == NULL)
		return (NULL);

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = value;
	new_n->parent = NULL;
	new_n->right = NULL;
	new_n->left = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_n;
		new_n->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = new_n;
		new_n->parent = parent;
		new_n->left = temp;
		temp->parent = new_n;
	}
	return (new_n);
}
