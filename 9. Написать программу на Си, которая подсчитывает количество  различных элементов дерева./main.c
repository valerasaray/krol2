#include <stdio.h>

struct tree_iter {
    int value;
    struct tree_node *next;
    struct tree_node *prev;
};

struct decue {
    struct decue *next;
    struct decue *prev;
    int value;
};

int main()
{   
    int cnt = 0;
    struct decue *dc;
    int size_d = init(dc);
    struct tree_iter *iter;
    
    while (iter != NULL) {
        push_b(iter, dc);
        iter = iter->next;
    }
    
    while (dc != NULL) {
        if (!in_dc(dc, mem)) {
            push_b(dc, mem);
            cnt++;
        }
        dc = dc->next;
    }
    
    printf("%d\n", cnt);

    return 0;
}
