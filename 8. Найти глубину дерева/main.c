#include <stdio.h>

struct tree_node {
    int value;
    struct tree_node *left;
    struct tree_node *right;
};

int depth(tree_node *root)
{
    if (root != NULL) {
        return max(depth(root->left), depth(root->right)) + 1;
    }
    
    return 0;
}
