#include <iostream>
#include <algorithm>
#include <climits>

int main(int argc, char* argv[])
{
    int c = 0;

    std::cin >> c;

    for (int i = 0; i < c; i++) {
        int n = 0;
        std::cin >> n;

        int maxLeft = INT_MIN;
        int maxBottom = INT_MIN;
        int minRight = INT_MAX;
        int minTop = INT_MAX;

        for (int j = 0; j < n; j++) {
            int left, top, right, bottom;
            std::cin >> left >> top >> right >> bottom;

            maxLeft = std::max(maxLeft, left);
            maxBottom = std::max(maxBottom, bottom);
            minRight = std::min(minRight, right);
            minTop = std::min(minTop, top);
        }

        long long width = minRight - maxLeft;
        long long height = minTop - maxBottom;

        if (width > 0 && height > 0) {
            std::cout << width * height << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }

    return 0;
}
