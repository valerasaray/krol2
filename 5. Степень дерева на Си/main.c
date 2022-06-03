struct vector_ch {
    struct vector_i *prev;
    struct vector_i *next;
    char *n;
};

struct node {
    char *name;
    int cnt_ch;
    struct vector_ch *children;
};

struct vector { // struct vector root
    struct vector *prev;
    struct vector *next;
    struct node *n;
};

int degree(struct vector *node)
{
    int max_ch = node->n->cnt_ch;
    
    while (node != NULL) {
        if (max_ch < node->n->cnt_ch) {
            max_ch = node->n->cnt_ch;
        }
        node = node->next;
    }
    
    return max_ch;
}


int main()
{
    struct vector root;
    printf("%d\n", degree(&root);
}
