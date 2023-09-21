#include <span>
#include <iostream>

//span::subspan

template <typename T, std::size_t n>
	requires requires (T x) { std::cout << x; }
void print_span(std::span<T, n> sp)
{
	for (size_t i{}; i < sp.size(); ++i)
		std::cout << sp[i] << ' ';
	std::cout << '\n';
}

int main()
{
	int a[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::span sp1{ a };
	print_span(sp1);
	std::cout << "sp1.size() = " << sp1.size() << '\n';
	
	auto sp2 = sp1.first<3>();
	std::cout << "sp2.size() = " << sp2.size() << '\n';
	print_span(sp2);

	auto sp3 = sp1.last<4>();
	std::cout << "sp3.size() = " << sp3.size() << '\n';
	print_span(sp3);
}
