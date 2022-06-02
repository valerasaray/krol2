#include <stdio.h>

struct decue {
    int *data;
    int size;
};

void re(struct decue *dc)
{
	if (!is_empty(dc)) {
		int tmp = pop_front(dc);
		re(dc);
		push_back(dc, tmp);
	}
}

int main()
{
    struct decue *dc;
    init_decue(dc);
    
    re(dc);
    
    return 0;
}
