
node *delete(node *t)
{
	if (t == NULL) {
		return;
	}
	if (t->left == NULL && t->right == NULL) {
		free(t)
		t = NULL;
	} else if (t->left != NULL && t->right == NULL) {
		t->left = delete(t->left);
	} else if (t->left == NULL && t->right != NULL) {
		t->right = delete(t->right);	
	} else {
		t->left = delete(t->left);
		t->right = delete(t->right);
	}
	return t;
}
