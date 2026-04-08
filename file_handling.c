#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *fp;
    char text[100];
    char buffer[100];


    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fputs("Hello Students\n", fp);
    fputs("Welcome to File Handling in C\n", fp);

    strcpy(text, "This line is written using fwrite.\n");
    fwrite(text, sizeof(char), sizeof(text), fp);

    fclose(fp);

    fp = fopen("sample.txt", "r");

    printf("Reading file using fgets():\n");

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fseek(fp, 0, SEEK_SET);

    printf("\nReading file using fread():\n");

    fread(buffer, sizeof(char), sizeof(buffer), fp);
    printf("%s", buffer);


    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    }

    fclose(fp);

    return 0;
}