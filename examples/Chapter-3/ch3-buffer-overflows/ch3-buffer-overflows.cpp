#include <cstdio>

int main() {
    char lower[]{ "abc?e" };
    char upper[]{ "ABC?E" };
    char* upper_ptr = upper; // same as char* upper_ptr = &upper[0];

    lower[3] = 'd'; // same as *(lower + 3) = 'd';
    upper_ptr[3] = 'D'; // same as *(upper_ptr + 3) = 'D';

    char letter_d = lower[3]; // same as char letter_d = *(lower + 4);
    char letter_D = upper_ptr[3]; // same as char letter_D = *(upper + 4);

    printf("lower: %s\nupper: %s\n", lower, upper);

    lower[7] = 'g'; // Don't do this
}

// OUTPUT:
// lower: abcde
// upper: ABCDE