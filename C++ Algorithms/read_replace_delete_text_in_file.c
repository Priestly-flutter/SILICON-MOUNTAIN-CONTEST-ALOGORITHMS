#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Open the file
    FILE *file = fopen("textInFile.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return EXIT_FAILURE;
    }

    // Read the file into a buffer
    char *buffer = malloc(1024);
    if (buffer == NULL)
    {
        printf("Error allocating memory\n");
        return EXIT_FAILURE;
    }
    fread(buffer, 1, 1024, file);

    // Replace the text
    char *old_text = "old text";
    char *new_text = "new text";
    char *ptr = strstr(buffer, old_text);
    while (ptr != NULL)
    {
        memcpy(ptr, new_text, strlen(new_text));
        ptr = strstr(ptr + strlen(new_text), old_text);
    }

    // Delete the text
    char *start = strstr(buffer, old_text);
    if (start != NULL)
    {
        char *end = start + strlen(old_text);
        memmove(start, end, strlen(buffer) - (end - buffer));
    }

    // Write the buffer to the file
    rewind(file);
    fwrite(buffer, 1, strlen(buffer), file);

    // Close the file
    fclose(file);

    // Free the buffer
    free(buffer);

    return EXIT_SUCCESS;
}