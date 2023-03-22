#include "main.h"

/**
 *
 */

void print_to_98(int n) {
    if (n <= 98) {
        for (; n < 98; n++) {
            std::cout << n << ", ";
        }
    } else {
        for (; n > 98; n--) {
            std::cout << n << ", ";
        }
    }
    std::cout << "98\n";
}
