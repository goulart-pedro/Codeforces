#include <iostream>
#include <cmath>


int main() {
    int test_case_amnt; std::cin >> test_case_amnt; 
    while (test_case_amnt--) {
        int x,y; std::cin >> x >> y;
        int festimate = std::ceil(y / 2.0);
        int remaining = festimate * 15 - 4 * y;
        int unfitted = std::ceil((x - remaining) / 15.0);
        std::cout << std::max(festimate, festimate + unfitted) << '\n';
    }
}
