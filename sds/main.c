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


	//if (string) sdsfree(string); /* Not needed. */
	//sdsfree(string); /* Same effect but simpler. */
}

static void sds_basic_sdslen()
{
	printff("Cpoy buffer to sds");
	sds test1 = sdsempty();
	char buf[3] = {0};
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
	sds s2 = sdsdup(s1); //duplicate
	printff("%s %s", s1, s2);
}

static void sds_concatenating()
{
	//sds sdscatlen(sds s, const void *t, size_t len);
	//sds sdscat(sds s, const char *t);

	sds s = sdsempty();
	s = sdscat(s, "Hello ");
	s = sdscat(s, "World!");
	printff("%s\n", s);



	sds s1 = sdsnew("aaa");
	sds s2 = sdsnew("bbb");
	s1 = sdscatsds(s1, s2);
	sdsfree(s2);
	printff("%s\n", s1);
	sdsfree(s1);

	s = sdsempty();
	s = sdsnew("Hello");
	s = sdsgrowzero(s, 6);
	s[5] = '!'; /* We are sure this is safe because of sdsgrowzero() */
	printff("%s\n", s);

	s = sdsempty();
	int a = 10, b = 20;
	s = sdsnew("The sum is: ");
	s = sdscatprintf(s, "%d+%d = %d", a, b, a + b);

	char *name = "Anna";
	int loc = 2500;
	s = sdsempty();
	s = sdscatprintf(sdsempty(), "%s wrote %d lines of LISP\n", name, loc);

	sdsfree(s);

}

static void convert_numbers()
{
	//conver int to sds
	int some_integer = 100;
	sds num = sdscatprintf(sdsempty(), "%d\n", some_integer);

	sds s = sdsfromlonglong(10000);
	printff("%s len: %d\n", s, (int) sdslen(s));
}

static void split()
{
	sds *tokens;
	int count, j;

	sds line = sdsnew("Hello World!");
	tokens = sdssplitlen(line, sdslen(line), " ", 1, &count);

	for (j = 0; j < count; j++)
		printff("%s\n", tokens[j]);
	sdsfreesplitres(tokens, count);
}

static void join()
{
	char *tokens[3] = {"foo", "bar", "zap"};
	sds s = sdsjoin(tokens, 3, "|");
	printff("%s\n", s);
}

static void trim()
{
	sds s = sdsnew("         my string\n\n  ");
	sdstrim(s, " \n");
	printff("-%s-\n", s);


	s = sdsnew("Hello World!");
	sdsrange(s, 1, 4);
	printff("-%s-\n");

	s = sdsnew("Hello World!");
	sdsrange(s, 6, -1);
	printff("-%s-\n");
	sdsrange(s, 0, -2);
	printff("-%s-\n");


}

/*
 *
 */
int main(int argc, char** argv)
{
	sds_basic_sdslen();

	sds_concatenating();

	convert_numbers();
	
	join();

	return(EXIT_SUCCESS);
}
