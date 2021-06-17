#include <cstdio>

int main() {
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    int* gettysburg_address = &gettysburg;
    printf("&gettysburg: %p\n", gettysburg_address);
}

// OUTPUT:
// gettysburg: 0
// &gettysburg: 0x16f79f56c