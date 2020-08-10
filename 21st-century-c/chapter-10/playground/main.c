#include <stdio.h>


int main() {
    int x = 0;

    here:
    x++;
    printf("%d\n", x);
    if (x < 10) { goto here; }
}
