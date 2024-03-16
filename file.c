#include <stdio.h>

int main()
{
    FILE *input, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "rb");

    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    destinationFile = fopen("destination.txt", "wb");

    if (destinationFile == NULL)
        {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 2;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
