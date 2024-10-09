#include <stdio.h>
#include <string.h>

void runLengthEncode(const char *input, char *output) {
    int count;
    int i, j = 0;
    int length = strlen(input);

    for (i = 0; i < length; i++) {
        // Count occurrences of input[i]
        count = 1;
        while (i + 1 < length && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Store the character and its count in output
        j += sprintf(&output[j], "%c%d", input[i], count);
    }

    // Null-terminate the output string
    output[j] = '\0';
}

int main() {
    const char *input = "aaabbbccdaa";
    char output[100]; // Ensure this is large enough to hold the output

    runLengthEncode(input, output);
    printf("Input: %s\n", input);
    printf("Encoded: %s\n", output);

    return 0;
}