#include <vector>
#include <array>
#include <span>

int main()
{
	std::array ar{ 1, 2, 3, 4, 5 };
	std::vector ivec{ 1, 2, 3, 4, 5 };
	std::span<int> vec_span{ ivec };
	std::span<int> ar_span{ ar };
	static_assert(std::same_as<decltype(vec_span), decltype(ar_span)>);
}
