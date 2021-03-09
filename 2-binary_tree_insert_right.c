#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;
    if(parent)
    {
        new_node = malloc(sizeof(binary_tree_t));
        new_node->n = value;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->parent = parent;
        if(parent->right)
        {
            new_node->right = parent->right;
            parent->right->parent = new_node;
        }
        parent->right = new_node;
    }
    return(new_node);
}