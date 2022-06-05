// Сложность алгоритма O(n)
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	stack<char> s;
	int top;
	string c;
	cin >> c;
	for (int i = 0; i < c.size() - 1; i++) {
		if (c[i] == '(') {
			s.push(c[i]);
		} else {
			if (s.empty()) {
				printf("FALSE\n");
				return 0;
			}
			char top = s.top();
			s.pop();
			if (c[i] == '(' && top != ')') {
				printf("FALSE\n");
				return 0;
			}	
		}
	}
	s.pop();
	if (s.empty()) {
		printf("TRUE\n");
	} else {
		printf("FALSE\n");
	}
	return 0;
}
