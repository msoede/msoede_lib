#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("Defines from Limits.h: \n");
	printf("The number of bits in a byte %d\n", CHAR_BIT);
	printf("+-------+---------------+----------------------+----------------------+\n");
	printf("| VALUE |  DESCRIPTION  |         MIN          |         MAX          |\n");
	printf("+-------+---------------+----------------------+----------------------+\n");
	printf("| SCHAR | SIGNED CHAR   | %20d | %20d |\n", SCHAR_MIN, SCHAR_MAX);
	printf("| UCHAR | UNSIGNED CHAR |                    - | %20d |\n", UCHAR_MAX);
	printf("| SHRT  | SHORT INT     | %20d | %20d |\n", SHRT_MIN, SHRT_MAX);
	printf("| INT   | INT           | %20d | %20d |\n", INT_MIN, INT_MAX);
	printf("| CHAR  | CHAR          | %20d | %20d |\n", CHAR_MIN, CHAR_MAX);
	printf("| LONG  | LONG          | %20ld | %20ld |\n", LONG_MIN, LONG_MAX);
	printf("+-------+---------------+----------------------+----------------------+\n");


	//	printf("\nCalculating...\n");
	//	char maxChar = 0;
	//	char minChar  = 0;
	//	short maxShort = 0;
	//	int maxInt = 0;
	//	long maxLong = 0;
	//	long i = 0;
	//	while (1) {
	//		i++;
	//		long ipow = pow(2, i);
	////		printf("%21.0f\n", ipow);
	//
	//		if (minChar < -(ipow-1)) {
	//			minChar = -(ipow-1);
	//		}
	//
	//		if (maxChar < (ipow-1)) {
	//			maxChar = ipow-1;
	//			printf("maxChar %d\n",maxChar);
	//		}
	//
	//		if (i > 64) {
	//			break;
	//		}
	//
	//	}
	//
	//	printf("-------- RESUALT --------\n");
	//	printf("Resualt: char min  %d\n", minChar);
	//	printf("Resualt: char max  %d\n", maxChar);
	//	printf("Resualt: short %d\n", maxShort);
	//	printf("Resualt: int   %d\n", maxInt);
	//	printf("Resualt: long  %ld\n", maxLong);
	//	printf("-------- RESUALT --------\n");
}
