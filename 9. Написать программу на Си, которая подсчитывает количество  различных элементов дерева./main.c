#include <stdio.h>

struct tree_iter {
    struct tree_node *node;
    struct tree_iter *next;
    struct tree_iter *prev;
};

struct decue {
    struct decue *next;
    struct decue *prev;
    struct tree_node *node;
};

int main()
{   
    int cnt = 0;
    struct decue *dc;
    int size_d = init(dc);
    struct tree_iter *iter;
    struct decue *mem;
    init(mem);
    
    while (iter != NULL) {
        push_b(iter->node, dc);
        iter = iter->next;
    }
    
    while (dc != NULL) {
        if (!in_dc(dc->node, mem)) {
            push_b(dc->node, mem);
            cnt++;
        }
        dc = dc->next;
    }
    
    printf("%d\n", cnt);

    return 0;
}
