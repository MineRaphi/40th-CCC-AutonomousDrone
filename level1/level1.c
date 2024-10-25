#include <stdio.h>

int main(void) {
    FILE *fp = fopen("level1_5.in", "r");
    FILE *output = fopen("level1.out", "w");

    int n;
    fscanf(fp, "%d\n", &n);

    for (int i=0; i<n; i++) {
        int tick;
        int height = 0;
        
        for (int i=0; i<100; i++) {
            fscanf(fp, "%d ", &tick);
            height+= tick;
        }

        fprintf(output, "%d\n", height);
    }

}