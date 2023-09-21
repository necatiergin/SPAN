#include <span>
#include <vector>
#include <iostream>

int main()
{
    std::vector v = { 1, 2, 3, 4, 5 };
    std::span sp{ v };

    std::cout << "sp.size() = " << sp.size() << '\n';
    std::cout << "sp.size_bytes() = " << sp.size_bytes() << '\n';
    std::cout << "sp.extent = " << sp.extent << '\n';

    std::cout << sp[0] << '\n';
    sp[0] *= 10;
    std::cout << v[0] << '\n';
    std::cout << sp.front() << '\n';
    ++sp.front();
    std::cout << v[0] << '\n';
    sp.back() *= 10;
    std::cout << v.back() << '\n';

    boolalpha(std::cout);
    std::cout << "sp.empty() = " << sp.empty() << '\n';
    for (size_t i{}; i < sp.size(); ++i)
        std::cout << *(sp.data() + i) << ' ';    
}
