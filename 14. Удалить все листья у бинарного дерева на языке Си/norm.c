
void delete_leafs(tree *t) {
    if (t == NULL) {
        return;
    }
    if (t->left != NULL) {
        if (t->left->left == NULL && t->left->right == NULL) {
            free(t->left);
            t->left = NULL;
        } else {
            delete_leafs(t->left);
        }
    }
    if (t->right != NULL) {
        if (t->right->left == NULL && t->right->right == NULL) {
            free(t->right);
            t->right = NULL;
        } else {
            delete_leafs(t->right);
        }
    }
}
