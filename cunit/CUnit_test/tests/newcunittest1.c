/*
 * File:   newcunittest1.c
 * Author: m_soe
 *
 * Created on 17-12-2017, 15:31:06
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

/*
 * CUnit Test Suite
 */

int init_suite(void)
{
	return 0;
}

int clean_suite(void)
{
	return 0;
}

long factorial(int arg);

void testFactorial()
{
	int arg;
	long result = factorial(arg);
	if (1 /*check result*/) {
		CU_ASSERT(0);
	}
}

int main()
{
	
//	CU_pSuite pSuite = NULL;
//
//	/* Initialize the CUnit test registry */
//	if (CUE_SUCCESS != CU_initialize_registry())
//		return CU_get_error();
//
//	/* Add a suite to the registry */
//	pSuite = CU_add_suite("newcunittest1", init_suite, clean_suite);
//	if (NULL == pSuite) {
//		CU_cleanup_registry();
//		return CU_get_error();
//	}
//
//	/* Add the tests to the suite */
//	if ((NULL == CU_add_test(pSuite, "testFactorial", testFactorial))) {
//		CU_cleanup_registry();
//		return CU_get_error();
//	}
//
//	/* Run all tests using the CUnit Basic interface */
//	CU_basic_set_mode(CU_BRM_VERBOSE);
//	CU_basic_run_tests();
//	CU_cleanup_registry();
	return CU_get_error();
}
