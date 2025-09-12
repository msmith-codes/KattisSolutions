#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

int main()
{
    int n = 0;
    int c = 0;

    std::cin >> n >> c;
    std::map<int, int> freq;
    std::map<int, int> first_idx;
    std::vector<int> input_seq;
    for(int i = 0; i < n; ++i) {
        int num = 0;
        std::cin >> num;
        input_seq.push_back(num);
        freq[num]++;
        if (first_idx.count(num) == 0) {
            first_idx[num] = i;
        }
    }

    // Store: number, frequency, first index
    struct Entry {
        int num;
        int freq;
        int first_idx;
    };
    std::vector<Entry> vec;
    for(const auto& entry : freq) {
        vec.push_back({entry.first, entry.second, first_idx[entry.first]});
    }

    std::sort(vec.begin(), vec.end(), [](const Entry& a, const Entry& b) {
        if (a.freq != b.freq)  {
            return a.freq > b.freq;
        }
        return a.first_idx < b.first_idx;
    });

    for(const auto& entry : vec) {
        for(int j = 0; j < entry.freq; ++j) {
            std::cout << entry.num << " ";
        }
    }

    std::cout << std::endl;
        
    return 0;
}
