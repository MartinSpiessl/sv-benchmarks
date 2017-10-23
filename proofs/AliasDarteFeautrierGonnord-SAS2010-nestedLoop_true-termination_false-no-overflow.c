/*
 * Program used in the experimental evaluation of the following paper.
 * 2010SAS - Alias,Darte,Feautrier,Gonnord, Multi-dimensional Rankings, Program Termination, and Complexity Bounds of Flowchart Programs
 *
 * Date: 2014
 * Author: Caterina Urban
 */
#include <stdio.h>

typedef enum {false, true} bool;

//extern int __VERIFIER_nondet_int(void);

int main() {
    int i, j, k, m, n, N;
	i = 0;
	j = 0;
	k = 0;
	n = 1;
	m = 1;
	N = 2147483647;
	if (0 <= n && 0 <= m && 0 <= N) {
		i = 0;
		while (i < n) {
			j = 0;
			while (j < m) {
				j = j + 1;
				k = i;
				while (k < N) {
					k = k + 1;
                }
				i = k;
			}
			//DEFECT: i could be equal to k that will be equal to N that could be equal to INT_MAX
			i = i + 1;
                        if (i < 0) {
                          printf("i = %d\n",i);
                          return 1;
                        }
		}
	}
	return 0;
}
