// Сортировка выбором: O(n^2)
int remove_max(stack∗ s)
{
	stack tmp;
	create (&tmp);
	int max = top(s);
	while(!is_empty(s)) {
		if (push(&tmp, pop(s))) {
			if (top(&tmp) > max) {
				max = top(&tmp);
			}
		}
	}
	int n = 0;
	while (!is_empty(&tmp)) {
		if((top(&tmp) == max) && (n == 0)) {
			n++;
			pop(&tmp);
		}
		else {
			push(s, pop(&tmp));
		}
	}
	destroy (&tmp);
	return max;
}

void sort(stack ∗s)
{
	stack res;
	init(&res);
	while(!is_empty(s)){
		push(&res, remove_max(s));
	}
	destroy(s);
	∗s = res;
	destroy (&res);
}
