/* 
 * File:   main.c
 * Author: m_soe
 *
 * Created on October 26, 2017, 9:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "sds.h"
#include "sdsalloc.h"

#define printff(M, ...) fprintf(stderr, "" M "\n", ##__VA_ARGS__)

static void sds_basic_simple()
{
	sds mystring = sdsnew("Hello World!");
	printff("%s", mystring);
	sdsfree(mystring);
}

static void sds_basic_create(){
	//sds sdsnewlen(const void *init, size_t initlen);
	//sds sdsnew(const char *init);
	//sds sdsempty(void);
	//sds sdsdup(const sds s);
}

static void sds_basic_sdslen()
{
	printff("Cpoy buffer to sds");
	sds test1 = sdsempty();
	char buf[3];
	buf[0] = 'A';
	buf[1] = 'B';
	buf[2] = 'C';
	test1 = sdsnewlen(buf, 3);
	printff("%s   len: %d", test1, sdslen(test1));

	sds test2 = sdsempty();
	printff("%d", sdslen(test2));

	sds s = sdsnewlen("A\0\0B", 4);
	printff("%s %d", s, sdslen(s));

	printff("example 2");
	sds s1 = sdsnew("Hello");
	sds s2 = sdsdup(s1);
	printff("%s %s", s1, s2);
}

/*
 * 
 */
int main(int argc, char** argv)
{
	sds_basic_sdslen();


	return(EXIT_SUCCESS);
}

