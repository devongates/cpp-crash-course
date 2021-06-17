#include <cstdio>

struct ClockOfTheLongNow {
    ClockOfTheLongNow() {
        year = { 2019 };
    }
    void set_year(int new_year) {
        year = new_year;
    }
    int get_year() {
        return year;
    }
  private:
    int year;
};

void add_year(ClockOfTheLongNow& clock) {
    clock.set_year(clock.get_year() + 1);
}

int main() {
    ClockOfTheLongNow clock;
    printf("The year is %d.\n", clock.get_year());
    add_year(clock);
    printf("The year is %d.\n", clock.get_year());
}

// OUTPUT:
// The year is 2019.
// The year is 2020.