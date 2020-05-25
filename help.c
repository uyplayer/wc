/* help */

#include<stdio.h>

void file_help(){

printf("Usage: wc [OPTION]... [FILE]...\
Print newline, word, and byte counts for each FILE, and a total line\
characters delimited by white space.\
the following order: newline, word, character, byte, maximum line length.\
  -b, --bytes            print the byte counts\
  -m, --chars            print the character counts\
  -l, --lines            print the newline counts\
  -L, --max-line-length  print the maximum display width\
  -w, --words            print the word counts\
      --help     display this help and exit\
      --version  output version information and exit");

}