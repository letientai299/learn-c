#include <stdio.h>

typedef struct {
    char *name;
    int left, right, up, down;
} direction_s;

void this_row(direction_s);

void draw_box(direction_s);

int main() {
    direction_s d = {.name="left", .left=1};
    draw_box(d);

    d = (direction_s) {"upper right", .up=1, .right=1};
    draw_box(d);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-empty-initializer"
    draw_box((direction_s) {});
#pragma clang diagnostic pop
}

void this_row(direction_s d) {
    printf(d.left ? "*..\n"
                  : d.right ? "..*\n"
                            : ".*.\n");
}

void draw_box(direction_s d) {
    printf("%s\n", (d.name ? d.name : "a box"));
    d.up ? this_row(d), 0 : printf("...\n");
    (!d.up && !d.down) ? this_row(d), 0 : printf("...\n");
    d.down ? this_row(d), 0 : printf("...\n");
    printf("\n");
}
