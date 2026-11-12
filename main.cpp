#include <iostream>

namespace {
constexpr double kDiscountThreshold = 1000.0;
constexpr double kDiscountRate = 0.10;
}

double calculateTotal(double unitPrice, int quantity) {
    const double subtotal = unitPrice * static_cast<double>(quantity);

    if (subtotal > kDiscountThreshold) {
        return subtotal - (subtotal * kDiscountRate);
    }

    return subtotal;
}

int main() {
    std::cout << calculateTotal(250.0, 5) << '\n';
    std::cout << calculateTotal(100.0, 2) << '\n';
    std::cout << calculateTotal(200.0, 5) << '\n';

    return 0;
}
