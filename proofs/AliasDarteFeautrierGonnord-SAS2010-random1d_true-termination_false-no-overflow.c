/*
 * Program used in the experimental evaluation of the following paper.
 * 2010SAS - Alias,Darte,Feautrier,Gonnord, Multi-dimensional Rankings, Program Termination, and Complexity Bounds of Flowchart Programs
 *
 * Date: 2014
 * Author: Caterina Urban
 */
#include <stdio.h>
typedef enum {false, true} bool;

// extern int __VERIFIER_nondet_int(void);

int main() {
    int a, x, max;
	max = 2147483647;
	if (max > 0) {
		a = 0;
		x = 1;
		// DEFECT: should be x < max!
		while (x <= max) {
			if (1 != 0) {
				a = a + 1;
			} else {
				a = a - 1;
            }
			x = x + 1;
			if (x < 0) {
				printf("x = %d\n",x);
				return 1;
			}
		}
	}
	return 0;
}
