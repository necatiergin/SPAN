// quoted from the book C++20 by Jossutis

#include <span>
#include <array>

template<typename T>
void modifyElemsOfConstColl(const T& coll)
{
	coll[0] = {}; // OK for spans, ERROR for regular containers
	auto ptr = coll.data();
	*ptr = {}; // OK for spans, ERROR for regular containers
	for (auto pos = std::cbegin(coll); pos != std::cend(coll); ++pos) {
		*pos = {}; // OK for spans, ERROR for regular containers
	}
}

int main()
{
	std::array arr{ 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//modifyElemsOfConstColl(arr); // ERROR: elements are const
	modifyElemsOfConstColl(std::span{ arr }); // OOPS: compiles and modifies elements of a1
}
