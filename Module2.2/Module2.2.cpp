#include <iostream>
#include <unordered_set>
using namespace std;

typedef unordered_set<string> Myset;

int HashFunction(string k)
{
    return (k.length() % 100);
}

namespace std {
	template<>
	class hash<string> {
	public:
		size_t operator()(const string& s) const
		{
			return (s.length() % 100);
		}
	};
}

void main()
{
	string enter = "y";
	setlocale(LC_ALL, "Rus");
	while (enter == "y") 
	{
		Myset c1;
		string key;
		cout << "Ключ > "; cin >> key;
		//cout << "HashFunction(" << key << ")=" << HashFunction(key) << endl;
		c1.insert(key);
		Myset::hasher hfn = c1.hash_function();

		std::cout << "HashFunction(" << key << ")=" << hfn(key) << std::endl;
		std::cout << *c1.find(key); 

		cout << std::endl;
		cin >> enter;
	}
	system("pause>>void");
}