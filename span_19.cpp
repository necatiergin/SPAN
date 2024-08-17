#include <span>
#include <vector>
#include <ranges>

int main()
{
	using namespace std;

	vector ivec{ 2, 5, 7, 9, 3, 6 };

	//some adaptors return spans
	auto spn = views::counted(ivec.begin(), 5);
	static_assert(same_as<decltype(spn), span<int>>); //holds
}
