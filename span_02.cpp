// source : cppreference
// https://en.cppreference.com/w/cpp/container/span/dynamic_extent

#include <string_view>
#include <iostream>
#include <span>
#include <array>
#include <vector>

int main()
{
    auto print = [](std::string_view const name, std::size_t ex)
        {
            std::cout << name << ", ";
            if (std::dynamic_extent == ex)
                std::cout << "dynamic extent\n";
            else
                std::cout << "static extent = " << ex << '\n';
        };

    int a[]{1, 2, 3, 4, 5};

    std::span span1{ a };
    print("span1", span1.extent);

    std::span<int, std::dynamic_extent> span2{ a };
    print("span2", span2.extent);

    std::array ar{1, 2, 3, 4, 5};
    std::span span3{ ar };
    print("span3", span3.extent);

    std::vector v{1, 2, 3, 4, 5} ;
    std::span span4{ v };
    print("span4", span4.extent);
}
