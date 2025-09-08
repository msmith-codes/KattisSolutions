#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

int main(int argc, char * argv[])
{
	int count;
	std::cin >> count;

	std::vector<std::array<int, 3>> vec;

	for(unsigned int i = 0; i < count; ++i) {
		std::array<int, 3> arr;
		for(unsigned int i = 0; i < 3; ++i) {
			std::cin >> arr[i];
		}	
		vec.push_back(arr);
	}

	std::cout << "Gnomes:" << std::endl;
	for(auto a : vec) {
		if(std::is_sorted(a.begin(), a.end()) || std::is_sorted(std::begin(a), std::end(a), std::greater<int>()))  {
			std::cout << "Ordered" << std::endl;		
		} else {
			std::cout << "Unordered" << std::endl;
		}
	}

	return 0;
}
