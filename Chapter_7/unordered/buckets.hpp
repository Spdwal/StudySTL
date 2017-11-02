#include<iostream>
#include<iomanip>
#include<utility>
#include<iterator>
#include<typeinfo>

template<typename T1, typename T2>
std::ostream& operator << (std::ostream& strm, const std::pair<T1,T2>& p)
{
	return strm << '[' << p.first << "," << p.second << ']';
}

template<typename T>
void printHashTableState(const T& cont)
{
	std::cout << "size:           " << cont.size() << std::endl;
	std::cout << "buckets:        " << cont.bucket_count() << std::endl;
	std::cout << "load factor:    " << cont.load_factor() << std::endl;
	std::cout << "max load factor:" << cont.max_load_factor() << std::endl;

	if(typeid(typename std::iterator_traits<typename T::iterator>::iterator_category)
	   == typeid(std::bidirectional_iterator_tag))
	{
		std::cout << "chaining style: doubly-linked" << std::endl; 
	}else
	{
		std::cout << "chaining style:  singly-linked" << std::endl;
	}

	std::cout<<"data:  " << std::endl;

	for(auto idx = 0; idx != cont.bucket_count(); ++idx)
	{
		std::cout <<"b[" << std::setw(2) << idx << "]:";
		for(auto pos = cont.begin(idx); pos!= cont.end(idx); ++pos)
		{
			std::cout << *pos << " "; 
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

   
}
