deque *reverse(deque *d)
{
	int x;
	if (!is_empty(d)) {
		x = pop_front(d);
		reverse(d);
		push_back(d, x);
	}
	return d;
}
