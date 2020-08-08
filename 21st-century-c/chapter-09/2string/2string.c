#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s1 = "Thread"; // embedded string
    char *s2;
    asprintf(&s2, "Floss");
    // s1[0] = 'f'; // segfault
    s2[0] = 'f';

    printf("%s\n", s1);
    printf("%s\n", s2);
//    free(s1);
    free(s2);
}
