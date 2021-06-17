#include <cstdio>

union Variant {
    char string[10];
    int integer;
    double floating_point;
};

int main() {
    Variant v;
    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);
    v.floating_point = 2.7182818284;
    printf("Eulaer's number e:   %f\n", v.floating_point);
    printf("A dumpster fire:     %d\n", v.integer);
}

// OUTPUT:
// The ultimate answer: 42
// Eulaer's number e:   2.718282
// A dumpster fire:     -1961734133