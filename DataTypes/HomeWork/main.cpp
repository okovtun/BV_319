# include <iostream>
using namespace std;
void main()
{
	cout << sizeof(long long) << endl;

	cout << "signed int: " << INT_MIN << "..." << INT_MAX << endl;
	cout << "unsigned int: " << 0 << " ... " << UINT_MAX << endl << endl;

	cout << "signed short: " << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "unsigned short: " << 0 << " ... " << USHRT_MAX << endl << endl;

	cout << "signed long: " << LONG_MIN << "..." << LONG_MAX << endl;
	cout << "unsigned long: " << 0 << " ... " << ULONG_MAX << endl << endl;

	cout << "signed long long: " << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "unsigned long long: " << 0 << " ... " << ULLONG_MAX << endl << endl;
}