#include"binary_trees.h"

/*function that inserts a node as the right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * return: return a pointer to the created node, or NULL on failure 
 * or if parent is NULL*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	if (parent == NULL)
		return (NULL);
	new_node =  binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->righ = parent->right;
		parent->right->right = new_node->right;
	}
	parent->right = new_node->right;

	return (new_node);
}


