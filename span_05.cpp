#include <array>
#include <span>

int main()
{
	int c_ar[10];
	std::array ar{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::span<int> sp1{ c_ar}; // ok
	std::span<int> sp2{ ar }; // ok
	//std::span<int, 5> sp3{ ar}; // gecersiz
	//std::span<int, 5> sp4{c_ar}; // gecersiz
	std::span<int, 5> sp5{ ar.data(), 5 }; // ok
}
