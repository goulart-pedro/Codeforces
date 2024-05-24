#include <iostream>
#include <vector>
#include <cmath>

struct sign { int dist, time; };

void query() {
    int track_width, sign_amnt, query_amnt;
    std::cin >> track_width >> sign_amnt >> query_amnt;

    std::vector<sign> signs(sign_amnt + 1);

    signs[0] = {0,0};
    for (int i=1; i<sign_amnt +1; i++) std::cin >> signs[i].dist;
    for (int i=1; i<sign_amnt +1; i++) std::cin >> signs[i].time;

    while (query_amnt--) {
        int distance; std::cin >> distance;

        // busca binaria pelo inf sinal
        int left = 0,
                 right = sign_amnt + 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (signs[mid].dist <= distance) left = mid + 1;
            else right = mid;
        }
    
        sign inf = signs[right - 1],
             sup = signs[right];

        int inter_dist = sup.dist - inf.dist,
            inter_time = sup.time - inf.time,
            delta_dist = distance - inf.dist;
                 

        int delta_t = sup.dist == inf.dist
                    ? 0
                    : inf.time + (inter_time * 1.0 * delta_dist) / inter_dist;

        std::cout << delta_t << ' ';
    }

    std::cout << '\n';
}


int main() {
    int test_case_amnt;
    std::cin >> test_case_amnt; 
    while (test_case_amnt--) query();
}


