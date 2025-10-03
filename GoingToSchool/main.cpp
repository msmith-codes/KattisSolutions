#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string input; 
    std::getline(std::cin, input);

    long long int n = input.length();
    
    long long dp[2];
    const long long INF = (long long)1e18;
    dp[0] = 0;           // cost to be north (start)
    dp[1] = INF;         // cost to be south (initially unreachable)

    for (char c : input) {
        bool northV = (c == 'N' || c == 'B');
        bool southV = (c == 'S' || c == 'B');

        long long stay_north = dp[0] + (northV ? 1 : 0);
        long long cross_to_north = dp[1] + 1 + (long long)std::min(northV ? 1 : 0, southV ? 1 : 0);

        long long new_north = std::min(stay_north, cross_to_north);

        long long stay_south = dp[1] + (southV ? 1 : 0);
        long long cross_to_south = dp[0] + 1 + (long long)std::min(northV ? 1 : 0, southV ? 1 : 0);

        long long new_south = std::min(stay_south, cross_to_south);

        dp[0] = new_north;
        dp[1] = new_south;
    }

    std::cout << dp[0] << '\n';
    return 0;

}
