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
        return static_cast<T*>(::operator new(num*sizeof(T)));
    }

    void deallocate(T* p, std::size_t num){
        ::operator delete(p);
    }
};

templete<typename T>
bool operator==(const MyAlloc<T>&a
                const MyAlloc<T>&b) noexcept
{
    return true;
}

template<typename T1, typename T2>
bool operator==(const MyAlloc<T1>&a,
                const MyAlloc<T2>&b) noexcept
{
    return false;
}

template<typename T1, typename T2>
bool operator!=(const MyAlloc<T1>&a,
                const MyAlloc<T2>&b) noexcept
{
    return !(a==b);
}
