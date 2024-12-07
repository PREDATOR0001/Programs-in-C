#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    int count = 0;

    // Open source file in read mode
    sourceFile = fopen("a.txt", "r");
    if (sourceFile == NULL) {
        printf("Could not open source file a.txt\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen("b.txt", "w");
    if (destFile == NULL) {
        printf("Could not open destination file b.txt\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file and count characters
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
        count++;
    }

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied successfully.\n");
    printf("Number of characters copied: %d\n", count);

    return 0;
}
