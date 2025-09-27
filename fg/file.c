#include <stdio.h>

int main() {
    FILE* fp;
    fp = fopen("POEM.txt", "a");   // Open file in append mode
    fputc('$', fp);                // Write '$' at the end of the file
    fclose(fp);                    // Close the file
    return 0;
}