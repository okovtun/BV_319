#include <iostream>
using namespace std;

#define LOGICAL_TYPES

void main()
{
	/*  setloca(LC_ALL,"");
	    cout << "Hello DataTypes"<<endl;
	#if defined LOGICAL_TYPES
	    cout<<true<<endl;
		cout<<false<<endl;
		#endif
	*/
	cout << "int:" << sizeof(int) << endl;
	cout << "unsigned int: " << 0 << "..." << UINT_MAX << endl;
	cout << "signet int:" << INT_MIN << "..." << INT_MAX << endl;

	cout << endl << "short: " << sizeof(short) << endl;
	cout << "unsigned short: " << 0 << "..." << USHRT_MAX << endl;
	cout << "signed short: " << SHRT_MIN << "..." << SHRT_MAX << endl;

	cout << endl << "long: " << sizeof(long) << endl;
	cout << "unsigned long: " << 0 << "..." << ULONG_MAX << endl;
	cout << "signed long: " << LONG_MIN << "..." << LONG_MAX << endl;

	cout << endl << "long long: " << sizeof(long long) << endl;
	cout << " unsigned long long: " << 0 << "..." << ULLONG_MAX << endl;
	cout << "signet long long: " << LLONG_MIN << "..." << LLONG_MAX << endl;


}