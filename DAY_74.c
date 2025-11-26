// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceName[100], destName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Unable to open destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
    return 0;
}

