#ifndef diff_h
#define diff_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ARGC_ERROR 1
#define TOOMANYFILES_ERROR 2
#define CONFLICTING_OUTPUT_OPTIONS 3

#define MAXSTRINGS 1024
#define MAXPARAS 4096

void version(void);
void todo_list(void);
void loadfiles(const char* filename1, const char* filename2);
void print_option(const char* name, int value);
void diff_output_conflict_error(void);
void setoption(const char* arg, const char* s, const char* t, int* value) ;
void showoptions(const char* file1, const char* file2);
void normal(para* p, para* q) ;
void identical(para* p, para* q);
void ignore(para* p, para* q);
void brief(para* p, para* q);
void suppress(para* p, para* q);
void leftcolumn(para* p, para* q);
void sidebyside(para* p, para* q);
void init_options_files(int argc, const char* argv[]);

#endif
