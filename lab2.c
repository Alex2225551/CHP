#include <stdio.h>

void encrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a'; 
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A'; 
        }
        text[i] = ch;
    }
}

void decrypt(char *text, int shift) {
    encrypt(text, 26 - (shift % 26)); 
}

int main() {
    char text[100];
    int shift;

    
    printf("Enter text: ");
    scanf("%99[^\n]", text); 

    
    printf("Enter key (1-25): ");
    scanf("%d", &shift);

    
    encrypt(text, shift);
    printf("Encrypted text: %s\n", text);
    
    decrypt(text, shift);
    printf("Decrypted text: %s\n", text);

    return 0;
}
