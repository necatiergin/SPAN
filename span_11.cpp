#include <vector>
#include <span>
#include <iostream>


void print(std::span<int> sp)
{
	for (auto i : sp)
		std::cout << i << ' ';
	std::cout << '\n';
}

int main()
{
	std::vector<int> ivec{ 1, 3, 5, 7 };
	std::span x{ ivec };

	for (int i = 0; i < 10; ++i) {
		print(x); //ub
		ivec.push_back(i);
	}
}
