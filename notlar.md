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
