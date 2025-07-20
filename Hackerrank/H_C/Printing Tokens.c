#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to a character
    char *s;

    // Allocate memory for the string
    s = malloc(1024 * sizeof(char));

    // Read a line of text from the user until a newline character is encountered
    scanf("%[^\n]", s);

    // Resize the allocated memory to fit the input string
    s = realloc(s, strlen(s) + 1);

    // Define a delimiter for tokenization
    char d[] = " ";

    // Tokenize and print each word
    char *token = strtok(s, d);

    while (token != NULL) {
        // Print each token (word)
        printf("%s\n", token);

        // Get the next token
        token = strtok(NULL, d);
    }

    // Free the dynamically allocated memory
    free(s);

    return 0;
}
