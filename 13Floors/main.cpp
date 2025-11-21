#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    if (n < 13) {
        std::cout << n << std::endl;
        return 0;
    } 

    std::cout << n + 1 << std::endl;
    return 0;
}
