#include <span>
#include <ranges>
#include <iostream>

//std::span is a range
//std::span is a view

int main()
{
	namespace rng = std::ranges;
	namespace vw = std::views;

	std::span sp{ "necati ergin" };

	static_assert(rng::range<decltype(sp)>); //holds
	static_assert(rng::view<decltype(sp)>); //holds

	for (auto c : sp | vw::drop(7) | vw::take(3))
		std::cout.put(c);
}
