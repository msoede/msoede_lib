#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main()
{

	enum boolean {
		NO, YES
	};

	enum {
		FALSE, TRUE
	};

	enum escapes {
		BELL = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', RETRUN = '\r'
	};

	enum month {
		JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
	};

	printf("NO %d YES %d\n", NO, YES);
	printf("FALSE %d TRUE %d\n", NO, YES);
	printf("BELL %c test%c %c test2 %c%c\n", BELL, BACKSPACE, TAB, NEWLINE, RETRUN);
	printf("JAN %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d \n", JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC);

}
