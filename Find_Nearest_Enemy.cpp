#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

struct Enemy {
    float x, y;
};

float Distance(const Enemy& a, const Enemy& b) {
    return std::sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

Enemy FindNearestEnemy(const Enemy& player, const std::vector<Enemy>& enemies) {
    float minDist = std::numeric_limits<float>::max();
    Enemy nearest = enemies[0];
    for (const auto& e : enemies) {
        float d = Distance(player, e);
        if (d < minDist) {
            minDist = d;
            nearest = e;
        }
    }
    return nearest;
}

int main() {
    Enemy player{0, 0};
    std::vector<Enemy> enemies{{5, 5}, {2, 1}, {-3, 4}};
    Enemy nearest = FindNearestEnemy(player, enemies);
    std::cout << "Nearest enemy at (" << nearest.x << ", " << nearest.y << ")\n";
}
