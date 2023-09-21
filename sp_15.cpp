#include <span>
#include <iostream>

//span::subspan

template <typename T, std::size_t n>
requires requires (T x){std::cout << x; }
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
	auto sp2 = sp1.subspan(3, 4);
	std::cout << "sp2.size() = " << sp2.size() << '\n';
	print_span(sp2);
}
