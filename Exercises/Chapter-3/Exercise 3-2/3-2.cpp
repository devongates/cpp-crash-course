#include <cstdio>

void read_from(char *str, size_t len) {
  for (size_t letter_it = 0; letter_it < len; letter_it++) {
    printf("%c", str[letter_it]);
  }
  printf("\n");
}

void write_to(char *str, size_t len, char char_to_insert,
              size_t pos_to_insert) {
  if (pos_to_insert >= len) {
    printf("Index out of bounds\n");
    return;
  }
  str[pos_to_insert] = char_to_insert;
}

int main() {
  char lower[]{"abc?e"};
  char upper[]{"ABC?E"};

  size_t len_lower = sizeof(lower) / sizeof(*lower);
  size_t len_upper = sizeof(upper) / sizeof(*upper);

  write_to(lower, len_lower, 'z', 3);
  read_from(lower, len_lower);
}