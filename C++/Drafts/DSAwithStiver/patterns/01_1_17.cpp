#include <iostream>
int main() {
    for (char i = 'A'; i <= 'E'; i++) {
        for (int j = 0; j < 5 - (i - 'A'); j++) {
            std::cout << " ";
        }
        for (char k = 'A'; k <= i; k++) {
            std::cout << k;
        }
        for (char k = i - 1; k >= 'A'; k--) {
            std::cout << k;
        }
        std::cout << std::endl;
    }
    return 0;
}
