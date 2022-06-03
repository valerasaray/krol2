#include <stdio.h>

struct decue {
    int *data;
    int size;
};

void rev(struct decue *dc)
{
	if (!is_empty(dc)) {
		int tmp = pop_front(dc);
		rev(dc);
		push_back(dc, tmp);
	}
}

int main()
{
    struct decue *dc;
    init_decue(dc);
    
    rev(dc);
    
    return 0;
}
