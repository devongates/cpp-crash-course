#include <cstdio>

int main() {
    int gettysburg{};
    int* gettysburg_address = &gettysburg;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    *gettysburg_address = { 17325 };
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
}

// OUTPUT:
// Value at gettysburg_address: 0
// Gettysburg Address: 0x16fc1f53c
// Value at gettysburg_address: 17325
// Gettysburg Address: 0x16fc1f53c