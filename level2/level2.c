#include <stdio.h>

int main(void) {
    FILE *fp = fopen("level2_5.in", "r");
    FILE *output = fopen("level2.out", "w");

    int n;
    fscanf(fp, "%d\n", &n);

    for (int i=0; i<n; i++) {
        int tick;
        int velocity = 0;
        int height = 0;
        
        for (int i=0; i<100; i++) {
            fscanf(fp, "%d ", &tick);
            velocity += tick-10;
            height += velocity;
        }

        fprintf(output, "%d\n", height);
    }

}