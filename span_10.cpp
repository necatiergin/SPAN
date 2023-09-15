#include <vector>
#include <span>
#include <iostream>


std::vector<int> get_vec()
{
	return { 1, 2, 3, 4, 5, 6, 7 };
}

int main()
{
	std::span x{ get_vec().begin(), 5}; //ub

	for (auto i : x)
		std::cout << i << " ";
}
