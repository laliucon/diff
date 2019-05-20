//
//  util.h
//  diff
//
//  Created by William McCarthy on 5/9/19.
//  Copyright © 2019 William McCarthy. All rights reserved.
//

#ifndef util_h
#define util_h

#include <stdio.h>
#define BUFLEN 256

char* yesorno(int condition);
FILE* openfile(const char* filename, const char* openflags);

void printleft(const char* left);
void printright(const char* right);
void printboth(const char* left);
void printdifferent(const char* differ);
void printline(void);
void printleftcolumn(const char* left);
void printnormalleft(const char* left);
void printnormalright(const char* right);
void dif(void);
#endif /* util_h */
