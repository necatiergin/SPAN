#include <span>
#include <iostream>
#include <ranges>

int main()
{
	int a[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::span sp{ a };

	for (auto i : sp) {
		std::cout << i;
	}

	std::cout << '\n';

	for (auto i : sp | std::views::reverse) {
		std::cout << i;
	}
	std::cout << '\n';

	for (auto iter = sp.begin(); iter != sp.end(); ++iter) {
		std::cout << *iter;
	}
	std::cout << '\n';

	for (auto iter = sp.rbegin(); iter != sp.rend(); ++iter) {
		std::cout << *iter;
	}
	std::cout << '\n';
}
