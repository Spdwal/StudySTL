#include"icstring.hpp"
int main()
{
	using std::cout;
	using std::endl;

	icstring s1("hallo");
	icstring s2("otto");
	icstring s3("hALLo");

	cout << std::boolalpha;
	cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
	cout << s1 << " == " << s3 << " : " << (s1 == s3) << endl;

	icstring::size_type idx = s1.find("ALL");
	if(idx != icstring::npos)
	{
		cout << "index of \"ALL\" in \"" << s1 << "\": "
			 << idx << endl;
	}else{
		cout << "\"ALL\" not found in \"" << s1 << endl;
	}
	return 0;
}
