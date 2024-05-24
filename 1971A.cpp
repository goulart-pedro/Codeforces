#include <iostream>

int main () {
    int testcases; std::cin >> testcases;
    while (testcases--) {
        int x, y;
        std::cin >> x >> y;
        if (x > y) std::swap(x, y); 
        std::cout << x << ' ' << y << '\n';
    }
}
