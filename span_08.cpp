#include <array>
#include <span>

int main()
{
	std::array a1{ 1, 2, 3, 4, 5, 6,7 ,8, 9, 10 };
	std::array a2{ 0, 8, 15 };
	const std::span<int> cspn{ a1 }; // span itself is const
	std::span<const int> spc{ a1 }; // viewed elements are const
	cspn[0] = 42; //gecerli
	++cspn.back(); //gecerli
	//spc[0] = 42; // gecersiz
	//cspn = a2; // gecersiz cpsn const
	spc = a2; // gecerli
}
