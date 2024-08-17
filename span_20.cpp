#include <span>
#include <iostream>

int main()
{
	//std::span<int, 5> spx; //error - no default ctor
	std::span<int> spy; //valid

	boolalpha(std::cout);

	std::cout << "spy.size()  = " << spy.size() << '\n';
	std::cout << "spy.empty() = " << spy.size() << '\n';
}
