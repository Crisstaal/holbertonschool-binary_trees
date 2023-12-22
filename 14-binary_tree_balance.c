#include "binary_trees.h"
/**
 * balance_difference -  measures the balance factor of a binary tree
 * @tree: binary tree
 * @first_node: represent the first node
 * Return: the balance factor
 */
int balance_difference(const binary_tree_t *tree, int first_node)
{
	int l = 0; 
    int j = 0;

	if (tree->left)
		l = 1 + balance_difference(tree->left, 0);
	if (tree->right)
		j = 1 + balance_difference(tree->right, 0);
	if (first_node)
		return (l - j);
	if (l > j)
		return (l);
	return (j);
}
/**
 * binary_tree_balance - call balance_difference
 * @tree: pointer
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (balance_difference(tree, 1));
}
