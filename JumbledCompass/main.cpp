#include <iostream>

int main()
{
    int current_direction = 0;
    int correct_direction = 0;
    std::cin >> current_direction;
    std::cin >> correct_direction;

    int clockwise = (correct_direction - current_direction + 360) % 360;
    int counter_clockwise = clockwise - 360;

    if (clockwise <= 180) {
        std::cout << clockwise << std::endl;
    } else {
        std::cout << counter_clockwise << std::endl;
    }

    return 0;
}