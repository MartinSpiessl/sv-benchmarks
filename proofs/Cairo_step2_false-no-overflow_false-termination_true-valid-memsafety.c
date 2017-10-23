/*
 * Date: 06/07/2015
 * Created by: Ton Chanh Le (chanhle@comp.nus.edu.sg)
 * Adapted from Cairo_true-termination.c
 */
#include <stdio.h>
typedef enum {false, true} bool;

//extern int __VERIFIER_nondet_int(void);

int main()
{
    int x;
    x = 1;
	if (x > 0) {
	    //DEFECT: x != 0 should be x > 0, otherwise odd inputs will loop forever
	    while (x != 0) {
                if (x-2>x) {
                  printf("x = %d\n",x);
                  return 1;
                }
	    	x = x - 2;
    	}
	}
	return 0;
}
