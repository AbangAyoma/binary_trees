#include"binary_trees.h"
/**
 * binary_tree_node: create a node
 * @parent: pointer to the parent node to create
 * @value:value to be inputed to a node
 *
 * return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*creating a node, dont forget the typedef*/
	binary_tree_t * new_node;
	// allocate memory to the new node created
	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	//check if list is empty;
	if(new_node = NULL)
		return(NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;

	return (new_node);
};
