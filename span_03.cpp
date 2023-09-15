#include <span>
#include <iostream>
#include <array>

int main()
{
	//std::span<int, 5> sp1;
	std::span<int, 0> sp2; //gecerli
	std::cout << "sp2.extent = " << sp2.extent << '\n';
	std::span<int> sp3; //gecerli
	std::cout << "sp3.extent = " << sp3.extent << '\n';
	int a[]{ 1, 2, 3, 4, 5, 6 };
	std::span<int> sp4{ a };
	std::cout << "sp4.extent = " << sp3.extent << '\n';
	std::array<int, 3> ar{ 1, 2, 3 };
	std::span<int> sp5{ ar };
	std::cout << "sp5.extent = " << sp5.extent << '\n';
	std::span sp6{ ar };
	std::cout << "sp6.extent = " << sp6.extent << '\n';
}
