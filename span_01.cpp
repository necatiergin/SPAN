#include <span>
#include <iostream>

int main()
{
	int a[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::span<int, 10> sp1{ a };
	std::span<int> sp2{ a };

	std::cout << "sizeof(sp1) = " << sizeof(sp1) << "\n";
	std::cout << "sizeof(sp2) = " << sizeof(sp2) << "\n";
}
