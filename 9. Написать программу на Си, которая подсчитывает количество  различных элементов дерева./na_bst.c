// Сложность алгоритма: O(n + m), где n - кол-во вершин обычного дерева, а m - кол-во ребер
int bst_len(bst *b)
{
	if (b == NULL) {
		return 0;
	}
	
	int l = bst_len(b->left);
	int r = bst_len(b->right);

	return l + r + 1;
}

int tree_len(tree *t)
{
	if (t == NULL) {
		return 0;
	}
	int chi = tree_len(t->child);
	int sib = tree_len(t->sibling);

	return chi + sib + 1;
}

void tree_dfs_bst(tree *t, bst *b) {
	if (t == NULL) {
		return;
	}
	bst_add(b, t->data);

	tree_dfs_bst(t->child, b);
	tree_dfs_bst(t->sibling, b);
}

int tree_count(tree *t) {
	bst *b = bst_create();

	tree_dfs_bst(t, b);

	int cnt = tree_len(t) - bst_len(b);
	return cnt;
}
