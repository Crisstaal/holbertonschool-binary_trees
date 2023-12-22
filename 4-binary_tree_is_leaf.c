#include "binary_trees.h"
/**
 * binary_tree_is_leaf - is current node a leaf
 * @node: node
 * Return: 1 if node is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL  && node->right == NULL)
		return (1);
	return (0);
}