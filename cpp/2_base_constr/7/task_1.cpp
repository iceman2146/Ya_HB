#include <algorithm>
#include <iostream>
#include <vector>
 
struct Point {
    int x;
    int y;
};
 
int main() {
    size_t n;
    std::cin >> n;
 
    std::vector<Point> points(n);
 
    for (size_t i = 0; i != n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }
 
    std::sort(
        points.begin(),
        points.end(),
        [](const Point& p1, const Point& p2) {
            return p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y;
        }
    );
 
    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << "\n";
    }
}