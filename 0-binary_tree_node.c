#include "binary_trees.h"
/**
 * binary_tree_node - new binary tree node
 * @parent: parent
 * @value: value of the new node
 * Return: pointer to a new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}