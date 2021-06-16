#include <cstdio>

int main() {
    char alphabet[27];
    for (size_t i = 0; i < 26; i++) {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);
    for (size_t i = 0; i < 26; i++) {
        alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);
}

// OUTPUT:
// abcdefghijklmnopqrstuvwxyz
// ABCDEFGHIJKLMNOPQRSTUVWXYZ