#include <iostream>
#include <string>

int main()
{
    int r, c;
    std::cin >> r >> c;

    int unbalanced_count = 0;     

    for (int i = 0; i < r; i++) {
        std::string word;
        std::cin >> word;
        
        int word_len = word.length();
        int total_blanks = c - word_len;
        int left_blanks, right_blanks;
        
        if (total_blanks % 2 == 0) {
            left_blanks = total_blanks / 2;
            right_blanks = total_blanks / 2;
        } else {
            unbalanced_count++;
            if (unbalanced_count % 2 == 1) {
                left_blanks = total_blanks / 2;
                right_blanks = total_blanks / 2 + 1;
            } else {
                left_blanks = total_blanks / 2 + 1;
                right_blanks = total_blanks / 2;
            }
        }
        
        for (int j = 0; j < left_blanks; j++) {
            std::cout << '.';
        }
        std::cout << word;
        for (int j = 0; j < right_blanks; j++) {
            std::cout << '.';
        }
        std::cout << '\n';
    }
    
    return 0;
}
