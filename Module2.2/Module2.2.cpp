#include <iostream>
using namespace std;
int HashFunction(string k)
{
	return (k.length() % 100);
}
void main()
{
	setlocale(LC_ALL, "Rus");
	string key;
	cout << "Ключ > "; cin >> key;
	cout << "HashFunction(" << key << ")=" << HashFunction(key) << endl;
	system("pause>>void");
}