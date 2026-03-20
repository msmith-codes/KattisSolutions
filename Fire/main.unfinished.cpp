#include <iostream>
#include <vector>

std::vector<std::vector<char>> map;

struct Position
{
    int x;
    int y;
};

bool can_move(Position pos)
{

}

int test_case() 
{
    // -- GOT INPUT -- //
    int max_x = 0;
    int max_y = 0;
    std::cin >> max_x >> max_y;
    
    for(int y = 0; y < max_y; ++y) {
        std::vector<char> row;
        for(int x = 0; x < max_x; ++x) {
            char c = 0;
            
            std::cin >> c;
            row.push_back(c);
        }
        map.push_back(row);
    }

    int possible_exits = 0;
    

    // std::cout << " --- " << std::endl;

    // for(int y = 0; y < max_y; ++y) {
    //     for(int x = 0; x < max_x; ++x) {
    //         std::cout << map.at(y).at(x);
    //     }
    //     std::cout << std::endl;
    // }

    return 0;
}

int main()
{
    int test_cases = 0;
    std::cin >> test_cases;

    for(int i = 0; i < test_cases; ++i) {
        test_case();
    }

    return 0;
}