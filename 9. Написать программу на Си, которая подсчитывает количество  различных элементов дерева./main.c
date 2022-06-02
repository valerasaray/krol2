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
    struct tree_iter *iter;
    int size_d = init(dc);
    
    struct decue *mem;
    init(mem); 
    while (iter != NULL) {
        push_b(iter, dc);
        iter = iter->next;
    }
    
    while (iter != NULL) {
        if (!in_dc(iter, mem)) {
            push_b(iter, mem);
            cnt++;
        }
        iter = iter->next;
    }

    printf("%d\n", cnt);

    return 0;
}
