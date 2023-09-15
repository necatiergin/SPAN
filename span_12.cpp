#include <vector>
#include <span>
#include <iostream>

int main()
{
	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8 };
	std::cout << "vec.size() = " << vec.size() << '\n';
	std::cout << "vec.capacity() = " << vec.capacity() << '\n';

	std::span sp{ vec }; 
	vec.insert(vec.end(), {10, 20, 30}); 

	std::cout << "vec.size() = " << vec.size() << '\n';
	std::cout << "vec.capacity() = " << vec.capacity() << '\n';

	std::cout << sp[0]; // ub
}
