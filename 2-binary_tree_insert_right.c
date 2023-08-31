#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * if parent already has a right-child, the new node take its place,
 * and the old right-child must be set as the right-child of the new node.
 * @parent: pointer to the node to insert right child
 * @value: value to store in the new node
 * Return: pointer to created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = new_n;
		new_n->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = new_n;
		new_n->parent = parent;
		new_n->right = temp;
		temp->parent = new_n;
	}
	return (new_n);
}
