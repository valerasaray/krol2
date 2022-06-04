#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} tree;

int bfs_count(tree *t)
{
	vector<int> v;
	int flag = 1;
	queue<tree *> q;
	q.push(t);
	tree *tmp = t;
	while (!q.empty()) {
		for (int i = 0; i < v.size(); i++) {
			if (q.front()->data == v[i]) {
				flag = 0;
			}
		}
		if (flag) {
			v.push_back(q.front()->data);
		}
		flag = 1;
		q.pop();
		if (tmp->left != NULL) {
			q.push(tmp->left);
		}
		if (tmp->right != NULL) {
			q.push(tmp->right);
		}
		tmp = q.front();
	}
	return v.size();
}


int main(int argc, char const *argv[])
{
	tree *t = (tree *) malloc(sizeof(int));
	t->data = 21;
	t->right = (tree *) malloc(sizeof(int));
	t->left = (tree *) malloc(sizeof(int));
	t->right->data = 20;
	t->left->data = 11;
	t->right->left = NULL;
	t->right->right = NULL;
	t->left->left = NULL;
	t->left->right = NULL;
	
	cout << bfs_count(t) << "\n";

	free(t->left);
	t->left = NULL;
	free(t->right);
	t->right = NULL;
	free(t);
	t = NULL;
	return 0;
}
