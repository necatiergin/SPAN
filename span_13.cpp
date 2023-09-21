#include <iostream>
#include <span>

template<typename T, std::size_t length>
void print(std::span<T, length> span) {
    for (const auto &elem : span) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

int main() 
{
    int ar[] = { 1, 2, 3, 4, 5 };
    
    //print(ar); //error
    print(std::span{ ar});
    print(std::span{ ar, 1});
    print(std::span{ ar, 2});
    print(std::span{ ar, 3});
    print(std::span{ ar, 4});
    print(std::span{ ar, 5});
    print(std::span{ ar + 1, 3});
}
