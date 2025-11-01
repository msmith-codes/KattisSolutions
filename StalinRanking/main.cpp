#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n = 0;
    int x = 0;
    std::vector<int> a;

    std::cin >> n;
    
    // Inputing data.
    for(int i = 0; i < n; ++i) {
        int temp = 0;
        std::cin >> temp;
        a.push_back(temp);
    }

    if(std::is_sorted(a.begin(), a.end(), std::greater<int>())) {
        std::cout << a.size() << std::endl;
        return 0;
    }


    int c = 0;

    while(!a.empty()) {
        int max_int = 0;

        for(int i = 0; i < a.size(); ++i) {
            if(a.at(i) >= max_int) {
                max_int = a.at(i);
                a[i] = -1;
                ++c;
            }
        }

        std::erase(a, -1);

        ++x;
    }
    
    
    std::cout << x << std::endl;

    return 0;
}