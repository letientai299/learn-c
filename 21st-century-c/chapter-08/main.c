#include <stdio.h>

#define log(x) printf(#x ": %d\n",(x))

void inc(int a[]) {
    (*a)++;
}

void pa(const int *arr, const size_t n) {
    if (arr == NULL) {
        return;
    }

    printf("[");
    for (size_t i = 0; i < n; ++i) {
        if (i != 0) {
            printf(", ");
        }
        printf("%d", arr[i]);
    }
    printf("]\n");
}

int main() {
    int a[] = {1, 2, 3, 4, 4};
    size_t n = sizeof(a) / sizeof(a[0]);
    int *restrict x = a;
    pa(x, n);
    inc(a);
    pa(x, n);
}

