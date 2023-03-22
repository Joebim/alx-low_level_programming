#include "main.h"

/**
 *
 */

void print_to_98(int n) {
    if (n <= 98) {
        for (; i < 98; i++) {
            std::cout << i << ", ";
        }
    } else {
        for (; i > 98; i--) {
            std::cout << i << ", ";
        }
    }
    std::cout << "98\n";
}
