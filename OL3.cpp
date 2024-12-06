#include <iostream>

int main() {
    int days;
    std::cout << "кол-во дней ";
    std::cin >> days;

    int weeks = days / 7;
    int remainingDays = days % 7;

    std::cout << weeks << " недели " << remainingDays << " дни" << std::endl;

    return 0;
}
