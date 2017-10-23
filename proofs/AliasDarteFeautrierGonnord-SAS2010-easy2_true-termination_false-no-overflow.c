/*
 * Program used in the experimental evaluation of the following paper.
 * 2010SAS - Alias,Darte,Feautrier,Gonnord, Multi-dimensional Rankings, Program Termination, and Complexity Bounds of Flowchart Programs
 *
 * Date: 2014
 * Author: Caterina Urban
 */
#include <stdio.h>
//extern int __VERIFIER_nondet_int(void);

int main() {
	//DEFECT: x must not be bigger than 0
	int x = 12, y = 0, z = 2147483647;
	while (z > 0) {
		x = x + 1;
		y = y - 1;
		z = z - 1;
	}
	if (x<0) {
		printf("x = %d\n",x);
		return 1;
	}

	return 0;
}
