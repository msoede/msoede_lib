#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maxium input line size */

//prototype functions
int getline2(char s[], int lim);
void copy(char to[], char from[]);
void reverse(char s[]);

int main()
{
	int len = 0; //current line length
	int max = 0; // maxium length seen so far
	char line[MAXLINE]; // current input line
	char longest[MAXLINE]; // longest line saved here

	while ((len = getline2(line, MAXLINE)) > 0) {
		{
			reverse(line);

//			if (len > max) {
//				max = len;
//				copy(longest, line);
//				printf("longest %s\n", longest);
//				printf("line %s\n", line);
//
//				printf("max %d\n", max);
//
//			}
		}
	}
	if (max > 0) {
		printf("done: %s\n", longest);
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline2(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}

void reverse(char s[])
{
	printf("Line: %s\n",s);
	printf("reve: ");
	int i;
	for (i = strlen(s); i >= 0; i--) {
		printf("%c", s[i]);
	}
	printf("\n");

}
