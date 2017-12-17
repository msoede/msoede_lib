/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest1.c
 * Author: m_soe
 *
 * Created on 17. december 2017, 15:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Simple C Test Suite
 */

long factorial(int arg);

void testFactorial()
{
	int arg;
	long result = factorial(arg);
	
	
	if (1 /*check result*/) {
		printf("%%TEST_FAILED%% time=0 testname=testFactorial (newsimpletest1) message=error message sample\n");
	}
}

int main(int argc, char** argv)
{
	printf("%%SUITE_STARTING%% newsimpletest1\n");
	printf("%%SUITE_STARTED%%\n");

	printf("%%TEST_STARTED%%  testFactorial (newsimpletest1)\n");
	testFactorial();
	printf("%%TEST_FINISHED%% time=0 testFactorial (newsimpletest1)\n");

	printf("%%SUITE_FINISHED%% time=0\n");

	return(EXIT_SUCCESS);
}
