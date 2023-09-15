#include <iostream>
#include <span>
#include <vector>

template<typename T, std::size_t Sz>
void print_span(std::span<T, Sz> sp)
{
	std::cout << " size = " << sp.size() << '\n';
	if constexpr (Sz == std::dynamic_extent) {
		std::cout << "dynamic extent\n";
	}
	else {
		std::cout << "fixed/static extent\n";
	}
	for (const auto& elem : sp) {
		std::cout << ' ' << elem;
	}
	std::cout << '\n';
}

int main()
{
	int a[]{ 1, 2, 3 };
	std::span s1{a};
	std::vector vec{2, 4, 6, 8};
	std::span s2{vec};

	print_span(s1);
	print_span(s2);
	//print_span(a); //gecersiz çıkarım yapılamaz
	//print_span(vec); //gecersiz çıkarım yapılamaz
	print_span(std::span{ vec }); //gecerli
	print_span(std::span{ a }); //gecerli
}
