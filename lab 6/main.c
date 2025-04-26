#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct human {
    char name[30];
    char sname[30];
    char fname[50];
    int year;
};
int main() {
    FILE *input, *output;
    struct human h;
    int count = 0;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    
    while(fscanf(input, "%s %s %s %d", h.name, h.sname, h.fname, &h.year) != EOF) {
        if(h.year > 1980) {
            fprintf(output, "%s %s %s %d\n", h.name, h.sname, h.fname, h.year);
            count++;
        }
    }
    printf("Zapisano %d strok\n", count);
    fclose(input);
    fclose(output);
    return 0;
}
