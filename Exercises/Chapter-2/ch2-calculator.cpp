#include <cstdio>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Calculator(Operation new_operation) {
        current_operation = new_operation;
    }
    int calculate(int a, int b) {
        switch (current_operation)
        {
        case Operation::Add: {
            return a + b;
        } break;
        case Operation::Subtract: {
            return a - b;
        } break;
        case Operation::Multiply: {
            return a * b;
        } break;
        case Operation::Divide: {
            return a / b;
        } break;

        default:
            break;
        }
    }
  private:
    Operation current_operation;
};

int main() { 
    Calculator calc{ Operation::Multiply };
    int result = calc.calculate(3, 4);
    printf("Result: %d\n", result);
}