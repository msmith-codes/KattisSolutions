#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    int n;
    int m;

    std::cin >> n >> m;

    std::vector<std::string> ranking;
    for(int i = 1; i <= n; ++i) {
        ranking.push_back("T" + std::to_string(i));
    }

    for(int i = 0; i < m; ++i) {
        std::string winner;
        std::string loser;

        std::cin >> winner >> loser;

        int winIndex = std::find(ranking.begin(), ranking.end(), winner) - ranking.begin();
        int loseIndex = std::find(ranking.begin(), ranking.end(), loser) - ranking.begin();

        if(winIndex > loseIndex) {
            std::string losingTeam = ranking.at(loseIndex);
            ranking.erase(ranking.begin() + loseIndex);

            if(loseIndex < winIndex) {
                winIndex--;
            }

            ranking.insert(ranking.begin() + winIndex + 1, losingTeam);
        }
    }

    for(int i = 0; i < n; ++i) {
        std::cout << ranking.at(i);
        if(i < n - 1) {
            std::cout << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
