size_t depth(node *tree)
{
	if (tree == NULL) {
		return 0;
	}
	else {
		size_t left_depth = depth(tree->left);
		size_t right_depth = depth(tree->right);
		return (left_depth > right_depth) ? (left_depth + 1) : (right_depth + 1);
	}
}
