#include <vector>
#include <span>
#include <iostream>

//span range ctor

int main()
{
	std::vector<int> ivec{ 1, 3, 5, 7, 9, 11, 13 };

	std::span<int> sp1(ivec.begin(), ivec.begin() + 3);
	std::cout << sp1.extent << '\n';
	std::span sp2(ivec.begin(), ivec.begin() + 3);
	std::cout << sp2.extent << '\n';
	std::span<int, 3> sp3(ivec.begin(), ivec.begin() + 3);
	std::cout << sp3.extent << '\n';
}
