#include <iostream>

int main(){
    int w = 0;
    int s = 0;
    int c = 0;
    int g = 29370;
    int t = 29260;

    std::cin >> w;
    std::cin >> s;

    c = ((s+1) * (s))/2;
    w = w - t*c;

    w = w / (g-t);

    std::cout << w << std::endl;

    return 0;
}
