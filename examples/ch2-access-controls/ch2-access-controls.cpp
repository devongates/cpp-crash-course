#include <cstdio>

struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if (new_year < 2019) return false;
        year = new_year;
        return true;
    }
    int get_year() {
        return year;
    }
  private:
    int year = 2021;
};

int main() {
    ClockOfTheLongNow clock;
    bool is_clock_set;
    is_clock_set = clock.set_year(2018);
    printf("clock set: %d, year: %d\n", is_clock_set, clock.get_year());
    is_clock_set = clock.set_year(2020);
    printf("clock set: %d, year: %d\n", is_clock_set, clock.get_year());
}

// OUTPUT:
// clock set: 0, year: 2021
// clock set: 1, year: 2020