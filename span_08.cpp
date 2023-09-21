#include <array>
#include <span>

int main()
{
	std::array a1{ 1, 2, 3, 4, 5, 6,7 ,8, 9, 10 };
	std::array a2{ 0, 8, 15 };
	const std::span<int> cspn{ a1 }; // span itself is const
	std::span<const int> sp{ a1 }; // viewed elements are const
	cspn[0] = 42; // valid
	++cspn.back(); // valid
	//sp[0] = 42; // error
	//cspn = a2; // error cpsn const
	sp = a2; // valid
}
