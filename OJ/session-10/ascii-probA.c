#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string contains only letters
int is_valid_string(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            return 0;  // Not a valid string
        }
    }
    return 1;
}

// Function to encrypt a single character
char encrypt_char(char plaintext, char key) {
    // Convert to 0-25 range
    int plain_index = plaintext - 'a';
    int key_index = key - 'a';

    // Multiply and take modulo 26
    int encrypted_index = (plain_index * key_index) % 26;

    // Convert back to uppercase character
    return 'A' + encrypted_index;
}

// Function to process a single test case
void process_encryption(char *word, char *key) {
    // First, check lengths are equal
    int word_len = strlen(word);
    int key_len = strlen(key);

    if (word_len != key_len) {
        printf("ERROR\n");
        return;
    }

    // Check if both strings are valid (only letters)
    if (!is_valid_string(word) || !is_valid_string(key)) {
        printf("ERROR\n");
        return;
    }

    // Buffer to store encrypted string
    char encrypted[101];  // Max length is 100 + null terminator

    // Encrypt each character
    for (int i = 0; i < word_len; i++) {
        encrypted[i] = encrypt_char(word[i], key[i]);
    }
    encrypted[word_len] = '\0';  // Null terminate

    // Print encrypted string
    printf("%s\n", encrypted);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    getchar();  // Consume newline

    for (int i = 0; i < test_cases; i++) {
        char word[101];  // Max input word length is 100
        char key[101];   // Max input key length is 100

        // Read entire line
        if (fgets(word, sizeof(word), stdin) == NULL) break;

        // Remove newline from word if present
        word[strcspn(word, "\n")] = 0;

        // Find the space and split into word and key
        char *key_start = strchr(word, ' ');
        if (key_start == NULL) {
            printf("ERROR\n");
            continue;
        }

        // Null-terminate word and point to key
        *key_start = '\0';
        strcpy(key, key_start + 1);

        // Process encryption
        process_encryption(word, key);
    }

    return 0;
}
