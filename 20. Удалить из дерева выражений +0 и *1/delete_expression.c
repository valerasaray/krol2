// Сложность алгоритма O(n + m), где n - количество вершин, m - количество ребер

typedef enum {
    FINAL,
    INTEGER,
    OPERATOR,
    VARIABLE,
    BRACKET,
    ERROR,
} TokenType;

typedef struct {
    TokenType type;
    union {
        int   value_int;
        char  operator_name;
        bool  is_left_bracket;
        char  variable_name;
    } data;
} Token;

typedef struct tree_node *Tree;
struct tree_node {
    Token node;
    Tree left;
    Tree right;
};

Tree delete_expression(Tree t) {
	if (t == NULL) {
		return t;
	}
	delete_expression(t->left);
	delete_expression(t->right);
	if (t->node.type == OPERATOR && t->node.data.operator_name == '+') {
		if (t->left->node.type == INTEGER && t->left->node.data.value_int == 0) {
			Tree tmp = t->right;
			free(t);
			t = tmp;
		}
		if (t->right->node.type == INTEGER && t->right->node.data.value_int == 0) {
			Tree tmp = t->left;
			free(t);
			t = tmp;
		} 
	}
	if (t->node.type == OPERATOR && t->node.data.operator_name == '*') {
		if (t->left->node.type == INTEGER && t->left->node.data.value_int == 1) {
			Tree tmp = t->right;
			free(t);
			t = tmp;
		}
		if (t->right->node.type == INTEGER && t->right->node.data.value_int == 1) {
			Tree tmp = t->left;
			free(t);
			t = tmp;
		} 
	}
	return t;
}
