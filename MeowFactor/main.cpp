#include <iostream>
#include <cmath>

int main()
{
    long long n;
    long long a = 1;
    std::cin >> n;
    
    int limit = pow(n, 1.0/9.0) + 1;
    for(int i = 2; i <= limit; ++i) {
        long long b = 1;
        for(int j = 0; j < 9; ++j) {
            b *= i;
        }
        if(n % b == 0) {
            a = i;
        }
    }

    std::cout << a << std::endl;
    return 0;
}


