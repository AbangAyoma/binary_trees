#include"binary_trees.h"

/* Function that inserts a node as the left-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value:  the value to store in the new nod
 *
 * return: return a pointer to the created node, or NULL on failure 
 * or if parent is NULL*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t * new_node;
	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent,value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->left = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
