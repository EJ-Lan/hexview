#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // Check if exactly one additional argument was added
    if (argc != 2) {
        fprintf(stderr, "Usage %s <path-to-file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Declare a file pointer
    FILE* fptr;

    // Attempt to open the file
    fptr = fopen(argv[1], "r");

    // Check if fopen failed
    if (fptr == NULL) {
        fprintf(stderr, "Error opening %s\n", argv[1]);
        return EXIT_FAILURE;
    }

    printf("Opened successfully\n");

    // Close the file pointer
    fclose(fptr);

    return 0;
}