/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: m_soe
 *
 * Created on 17. december 2017, 15:22
 */

#include <stdio.h>
#include <stdlib.h>

long factorial(int arg)
{
	long result = 1;
	int i;
	for (i = 2; i <= arg; ++i) {
		result *= i;
	}
	return result;
}

int main(int argc, char** argv)
{
	printf("Type an integer and press Enter to calculate the integer's factorial: \n");
	int arg;
	fflush(stdout);
	scanf("%d", &arg);

	printf("factorial(%d) = %ld\n", arg, factorial(arg));

	return(EXIT_SUCCESS);
}

