// Сложность алгоритма: O(v + e), где v - количество вершин, а e - количество дуг
typedef struct _tree {
    int data;
    struct _tree *child;
    struct _tree *sibling;
} Tree;

int node_degree(Tree *t) {
    if (t == NULL) {
        return 0;
    }
    if (t->child == NULL) {
        return 0;
    }
    Tree *cur = t->child;
    int cnt = 1;
    while (cur->sibling != NULL) {
        cnt ++;
        cur = cur->sibling;
    }
    return cnt;
}

int tree_degree(Tree *t) {
    int deg = node_degree(t);
    int sibDeg = tree_degree(t->sibling);
    int chlDeg = tree_degree(t->child);
    
    if (deg > sibDeg && deg > chlDeg)
        return deg;
    if (sibDeg > chlDeg)
        return sibDeg;
    return chlDeg;
}
