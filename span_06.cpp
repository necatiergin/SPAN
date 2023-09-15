#include <vector>
#include <span>

int main()
{
	std::vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::span<const int> sp1{ ivec }; //ok 
	//std::span<long long> sp2{ ivec }; // gecersiz
	//std::span<int> sp3{ sp1 }; // gecersiz
	//std::span<const long> sp4{ sp1}; // gecersiz
}
