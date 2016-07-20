#include <stdio.h>

#include "lib.h"

#define GEN_PRINT3(name, type, mod)		\
	void print_ ## name(type n) {		\
		printf(mod "\n", n);		\
	}

#define GEN_PRINT2(type, mod)	GEN_PRINT3(type, type, mod)

GEN_PRINT2(char, "%d");
GEN_PRINT2(short, "%d");
GEN_PRINT2(int, "%d");
GEN_PRINT2(long, "%ld");
GEN_PRINT2(float, "%f");
GEN_PRINT2(double, "%lf");

GEN_PRINT3(longlong, long long, "%lld");
GEN_PRINT3(character, char, "%c");
GEN_PRINT3(string, const char *, "%s");
