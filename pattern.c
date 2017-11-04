//only for ftw - directory tree processing
#define _XOPEN_SOURCE 500
#include <ftw.h>

//basic headers
#include <stdlib.h>
#include <stdio.h>

//useful for most of tasks
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

//optional
#include <string.h>
#include <time.h>

#define ERR(source)     (perror(source), \
                        fprintf(stderr, "%s:%d\n", __FILE__, __LINE__), \
                        exit(EXIT_FAILURE))


//for programs with environment variables
extern char** environ;

int main(int argc, char** argv) {
        return EXIT_SUCCESS;
}
