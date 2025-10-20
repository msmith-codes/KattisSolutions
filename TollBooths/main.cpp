#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;

    int balance = 0;
    int minBalance = 0;

    for (int i = 0; i < n; ++i) {
        char type;
        int amount = 0;

        std::cin >> type >> amount;
        
        if(type == 'T') {
            balance -= amount;
        } else if(type == 'G') {
            balance += amount;
        }
        
        if(balance < minBalance) {
            minBalance = balance;
        }
    }

    std::cout << -minBalance << std::endl;
        
    return 0;
}
