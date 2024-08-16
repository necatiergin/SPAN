#include <span>
#include <iostream>
#include <vector>

int main()
{
	int a[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<int> ivec{ 2, 5, 8, 9 };

	std::span<int, 10> sp1{ a };	//fixed extent
	std::span<int> sp2{ a };		//dynamic extent
	std::span<int> sp3{ivec};		//dynamic extent

	std::cout << "sizeof(sp1) = " << sizeof(sp1) << '\n';
	std::cout << "sizeof(sp2) = " << sizeof(sp2) << '\n';
	std::cout << "sizeof(sp3) = " << sizeof(sp3) << '\n';
}
