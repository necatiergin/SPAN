#include <span>
#include <iostream>
#include <array>

int main()
{
	//std::span<int, 5> sp1; //error - no default ctor
	
	std::span<int, 0> sp2;
	std::cout << "sp2.extent = " << sp2.extent << '\n';
	
	std::span<int> sp3; //valid - dynamic extent
	std::cout << "sp3.extent = " << sp3.extent << '\n';
	
	int a[]{ 1, 2, 3, 4, 5, 6 };
	std::span<int> sp4{ a };  //valid - dynamic extent
	std::cout << "sp4.extent = " << sp4.extent << '\n';
	
	std::array<int, 3> ar{ 1, 2, 3 };  //valid - dynamic extent
	std::span<int> sp5{ ar };
	std::cout << "sp5.extent = " << sp5.extent << '\n';
	
	std::span sp6{ ar }; //CTAD	 - static extent
	std::cout << "sp6.extent = " << sp6.extent << '\n';
}
