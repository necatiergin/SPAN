#include <span>
#include <iostream>

int main()
{
	int ar[] = { 3, 6, 7 };
	const std::span sp = ar;

	sp[1] = 4;	  // valid
	*sp.begin() = 4; // valid
	sp.back() = 4; // valid

	for (auto i : ar)
		std::cout << i;
}
