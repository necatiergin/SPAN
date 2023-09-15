#include <vector>
#include <span>
#include <cassert>

int main()
{
	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7};
	std::span<int, 7> sp1{ vec }; // ok
	assert(sp1.size() == vec.size());
	//std::span<int, 10> sp2{ vec }; // u.b
	//std::span<int, 5> sp3{ vec }; // u.b.
	//std::span<int, 7> sp4{ vec, 7}; // invalid. no such ctor.
	std::span<int, 5> sp5{ vec.begin(), 5 }; // ok
	//std::span<int, 3> sp6{ vec.begin(), 5 }; // u.b
	//std::span<int, 8> sp7{ vec.begin(), 5 }; // u.b
	//std::span<int, 5> sp8{ vec.begin() }; // invalid. no such ctor.
}
