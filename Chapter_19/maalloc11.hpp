#include<cstddef>

template<typename T>
class MyAlloc{
public:
	typedef T value_type;

	myAlloc() noexcept{
		
	}
	template<typename U>
	myAlloc(const MyAlloc<U>&) noexcept{
		
	}

	T* allocate(std::size_t num){
		return static<T*>(::operator new(num*sizeof(T)));
	}

	void deallocate(T* p, sid::size_t num){
		::operator delete(p);
	}
};

template<typename T1, typename T2>
bool operator==(const MyAlloc<T1>&,
				const MyAlloc<T2>&) noexcept
{
	return true;
}

template<typename T1, typename T2>
bool operator!=(const MyAlloc<T1>&,
				const MyAlloc<T2>&) noexcept
{
	return false;
}
