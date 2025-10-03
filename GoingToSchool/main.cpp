#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string input; 
    std::getline(std::cin, input);

    long long int n = input.length();
    
    const long long int LARGE = 10000000000;
    long long int dp[2] = {0, LARGE}; 
    
    for (long long int i = 0; i < n; i++) {
        long long int new_dp[2];
        
        long long int stay_north = dp[0];
        if (input[i] == 'N' || input[i] == 'B') {
            stay_north += 1;
        }
        
        long long int cross_to_north = dp[1] + 1; // +1 for crossing
        if (input[i] == 'N' || input[i] == 'B') {
            cross_to_north += 1;
        }
        
        new_dp[0] = std::min(stay_north, cross_to_north);
        
        long long int stay_south = dp[1];
        if (input[i] == 'S' || input[i] == 'B') {
            stay_south += 1;
        }
        
        long long int cross_to_south = dp[0] + 1; // +1 for crossing
        if (input[i] == 'S' || input[i] == 'B') {
            cross_to_south += 1;
        }
        
        new_dp[1] = std::min(stay_south, cross_to_south);
        
        dp[0] = new_dp[0];
        dp[1] = new_dp[1];
    }
    
    std::cout << dp[0] << std::endl;
    
    return 0;
}
