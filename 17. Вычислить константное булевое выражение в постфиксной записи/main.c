#include <stdio.h>

enum token_types {D_OPERATOR, U_OPERATOR, VALUE};

struct token
{
	enum token_types type;
	union {
		int val;
		char op;
	} data;
};

int SolvePostfix(struct token arr[], int pos) {
	if (arr[pos].type == VALUE) {
		return arr[pos].data.val;
	}
	if (arr[pos].type == U_OPERATOR) {
		if (arr[pos].data.op == '!') {
			return !SolvePostfix(arr, pos - 1);
		}
		return 0;
	}
	int l = SolvePostfix(arr, pos - 1), r = SolvePostfix(arr, pos - 2);
	if (arr[pos].data.op == '|') {
		return l || r;
	}
	if (arr[pos].data.op == '&') {
		return l && r;
	}
	return 0;
}

int main() {
	struct token a[10];
	a[0].data.val = 1;
	a[0].type = VALUE;
	a[1].data.val = 1;
	a[1].type = VALUE;
	a[2].data.op = '&';
	a[2].type = D_OPERATOR;

	printf("%d\n", SolvePostfix(a, 2));

}

