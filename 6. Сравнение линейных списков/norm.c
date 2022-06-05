//Сложность алгоритма O(n)
typedef struct _list_node {
    int data;
    struct _list_node *next;
} list_node;

typedef struct _list {
    list_node *head;
    int size;
} list;

int check(list *l, list *r) {
    list_node *a = l->head;
    list_node *b = r->head;
    int cur = 0;
    while (cur < l->size && cur < r->size) {
        if (a->data < b->data) {
            return -1;
        }
        if (a->data > b->data) {
            return 1;
        }
        a = a->next;
        b = b->next;
        cur++;
    }
    if (l->size < r->size) {
        return -1;
    }
    if (l->size > r->size) {
        return 1;
    }
    
    return 0;
}
