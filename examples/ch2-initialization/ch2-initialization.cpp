#include <cstdint>
#include <cinttypes>
#include <cstdio>


struct PodStruct {
    uint64_t a;
    char b[256];
    bool c;
};

int main() {

    int a = 0;
    int b{};
    int c = {};
    int d;

    int e = 42;
    int f{ 42 };
    int g = { 42 };
    int h(42);
    
    PodStruct initialized_pod1{};
    PodStruct initialized_pod2 = {};
    PodStruct initialized_pod3{ 42, "Hello" };
    PodStruct initialized_pod4{ 42, "Hello", true };
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("\n");

    printf("e: %d\n", e);
    printf("f: %d\n", f);
    printf("g: %d\n", g);
    printf("h: %d\n", h);
    printf("\n");
    
    printf("initialized_pod1: %" PRIu64 ", %s, %d\n", initialized_pod1.a, initialized_pod1.b, initialized_pod1.c);
    printf("initialized_pod2: %" PRIu64 ", %s, %d\n", initialized_pod2.a, initialized_pod2.b, initialized_pod2.c);
    printf("initialized_pod3: %" PRIu64 ", %s, %d\n", initialized_pod3.a, initialized_pod3.b, initialized_pod3.c);
    printf("initialized_pod4: %" PRIu64 ", %s, %d\n", initialized_pod4.a, initialized_pod4.b, initialized_pod4.c);
}

// OUTPUT:
// a: 0
// b: 0
// c: 0
// d: 0

// e: 42
// f: 42
// g: 42
// h: 42

// initialized_pod1: 0, , 0
// initialized_pod2: 0, , 0
// initialized_pod3: 42, Hello, 0
// initialized_pod4: 42, Hello, 1