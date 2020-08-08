#include <stdio.h>
#include <math.h>

double sum(double in[]) {
    double out = 0;
    for (int i = 0; !isnan(in[i]); ++i) {
        out += in[i];
    }
    return out;
}

int main() {
    double list[] = {1.1, 2.2, 3.3, 4.4, NAN};
    double s = sum(list);
    printf("%0.2g\n", s);
}

