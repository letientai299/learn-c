#include <stdio.h>
#include <stdlib.h>

long long int fibonacci() {
    static long long int a = 0;
    static long long int b = 1;
    long long int out = a + b;
    a = b;
    b = out;
    return out;
}

int main() {
    for (int i = 0; i < 50; ++i) {
        printf("%lli\n", fibonacci());
    }
    return EXIT_SUCCESS;
}
