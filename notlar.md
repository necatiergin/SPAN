```
inline constexpr std::size_t dynamic_extent = std::numeric_limits<std::size_t>::max();

namespace std {
	template<typename ElementType, size_t Extent = dynamic_extent>
	class span {
		//...
	};
}
```

<h4>The class template span describes an object that can refer to a contiguous sequence of objects with the first element of the sequence at position zero.</h4>

An instance of std::span<T> is a lightweight object that can refer to a contiguous sequence of objects starting at index zero. std::span is added to the standard library in C++20. However, it has been available to C++ developers as part of the GSL for quite some time now.

<h3>std::span avantajları</h3>
Niyeti daha iyi anlatıyor.

```
void foo(const int *p, std::size_t n);
void foo(std::span<int>)
```
Kopyalaması kolay. Değerle bir fonksiyona aktarılması maliyeti düşük. Örneğin<br>
```sizeof(std::span) == sizeof(pointer) + sizeof(size_t)```
olabilir.<br>
- container'lara benzer bir arayüz _(interface)_ sunuyor.
- üye fonksiyonları kullanım kolaylığı sağlıyor.
- _range base for loop_ ile kullanılabiliyor.
- elemanların nerede tutulduğu _std::span_ için önemli değil. Elemanların _contigous memory_'de olması yeterli. (_c arrays, std::array, std::vector, std::initilizer_list etc._)

Bir _span_ nesnesi görüntülediği _range_'in sahibi değil. _Dangling pointer_ oluşma riski var.

default ctor ile oluşturulan bir _span_ nesnesi _dynamic extent_'e sahip. Böyle bir nesnenin _size_ üye fonksiyonu çağrıldığında _0_ değeri _empty_ fonksiyonu çağrıldığında _true_ değeri döndürür.


