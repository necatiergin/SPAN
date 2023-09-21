```
inline constexpr std::size_t dynamic_extent = std::numeric_limits<std::size_t>::max();

namespace std {
	template<typename ElementType, size_t Extent = dynamic_extent>
	class span {
		//...
	};
}
```

**The class template span describes an object that can refer to a contiguous sequence of objects with the first element of the sequence at position zero.**
