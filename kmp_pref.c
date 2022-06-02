// КНУТТ МОРРИС ПРАТТ
#include <stdio.h>
#include <stdlib.h>

void fill_pref(char *s, int *pi)
{
	pi[0] = 0;
	int j = 1;
	while (s[i] != '\0') {
		int pi_prev = pi[i - 1];
		if (s[pi_prev] == s[i]) {
			pi[i] = pi[prev] + 1;
		} else {
			pi_prev = pi[pi_prev - 1];
			while (pi_prev > 0 && s[i] != s[pi_prev]) {
				pi_prev = pi[pi_prev - 1];
			}
			if (s[i] == s[pi_prev]) {
				pi[i] = pi_prev + 1;
			} else {
				pi[i] = 0;
			}
		}
		i++;
	} 
}

int search_kmp(char *s, char *t)
{
	int m = strlen(s);
	int *pi = malloc(sizeof(int) * m);
	fill_pref(s, pi);
	int pi_prev = 0;
	int i = 0;
	while (t[i] != "\0") {
		while (pi_prev > 0 && t[i] != s[pi_prev]) {
			pi_prev = pi[pi_prev - 1];
		}
		int pi_cur;
		if (t[i] == s[pi_prev]) {
			pi_cur = pi_prev + 1;
		} else {
			pi_cur = 0;
		}
		if (pi_cur == m)
			return i - m;
		pi_prev = pi_cur;
		i++;
	}
	return -1;
}