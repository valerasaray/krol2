struct node {
    char *name;
    struct vector_i *children;
};

struct vector {
    struct vector *prev;
    struct vector *next;
    struct node *man;
};

struct vector_i 
    struct vector *prev;
    struct vector *next;
    int size;
};

int degree(struct vector *root)
{
    int max = root->man->children->size;
    
    while (root != NULL) {
        if (max < root->man->children->size) {
            max = root->man->children->size;
        }
        root->next;
    }
    
    return max;
}
