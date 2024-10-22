#include <stdio.h>
#include <string.h>

void encode(char l[]) {
    char a[27] = "abcdefghijklmnopqrstuvwxyz";
    char b[27] = "qwertyuiopasdfghjklzxcvbnm";

    int k = strlen(l);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 26; j++) {
            if (l[i] == a[j]) {
                l[i] = b[j];
                break;
            }
        }
    }
}

void decode(char l[]) {
    char a[27] = "abcdefghijklmnopqrstuvwxyz";
    char b[27] = "qwertyuiopasdfghjklzxcvbnm";

    int k = strlen(l);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 26; j++) {
            if (l[i] == b[j]) {
                l[i] = a[j];
                break;
            }
        }
    }
}

int main() {
    char c[100];
    printf("Enter the text: ");
    fgets(c, sizeof(c), stdin);

    size_t len = strlen(c);
    if (len > 0 && c[len - 1] == '\n') {
        c[len - 1] = '\0';
    }

    encode(c);
    printf("Encoded: %s\n", c);

    decode(c);
    printf("Decoded: %s\n", c);

    return 0;
}
