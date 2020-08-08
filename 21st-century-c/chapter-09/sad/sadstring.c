#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void get_strings(char const *s) {
    char *cmd;
    size_t len = strlen("strings ") + strlen(s) + 1;
    cmd = malloc(len);
    snprintf(cmd, len, "strings %s\n", s);
    if (system(cmd)) {
        fprintf(stderr, "something wrong when running %s\n", cmd);
    }

    free(cmd);
}


int main(int argc, char **argv) {
    int i = argc > 1 ? 1 : 0;
    get_strings(argv[i]);
}

