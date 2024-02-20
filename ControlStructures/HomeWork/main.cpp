#include <iostream>
#include <conio.h>
using namespace std;

#define GEOMETRIAL
//#define SQUARE
//#define UPPERRIGHTTRIANGLE
//#define LOWERRIGHTTRIANGLE
//#define UPPERLEFTTRIANGLE
//#define LOWERLEFTTRIANGLE
//#define GEOMETRIAL
#define RHOMBUS
//#define PLUSMINUS
//#define CHESS
//#define HARDCHESS

void main() {
	setlocale(LC_ALL, "Russian");

	int n, i, j, k, h;


#ifdef GEOMETRIAL
	cout << "¬ведите размер фигуры: "; cin >> n;
#ifdef SQUARE

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // SQUARE

#ifdef UPPERRIGHTTRIANGLE


	for (i = 0; i <= n; i++) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // UPPERRIGHTTRIANGLE

#ifdef LOWERRIGHTTRIANGLE

	for (i = n; i > 0; i--) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // LOWERRIGHTTRIANGLE

#ifdef LOWERLEFTTRIANGLE

	for (i = n; i > 0; i--) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
		for (k = n; k >= i; k--) {
			cout << " ";
		}
	}
	cout << endl;
#endif // LOWERLEFTTRIANGLE

#ifdef UPPERLEFTTRIANGLE

	for (i = 0; i <= n; i++) {
		for (j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
		for (k = n; k >= i; k--) {
			cout << " ";
		}
	}
	cout << endl;
#endif // UPPERLEFTTRIANGLE  

#ifdef RHOMBUS

	double center = n;
	for (i = 0; i < n*2; i++) {
		for (j = 0; j < n*2; j++) {
			if (i < center) {
				if (j > center - i || j < center + i || j == center) {
					if (j < center - i - 1) {
						cout << " ";
					}
					else if (j < center - i) {
						cout << "/";
					}
					else if (j == center) {
						cout << "";
					}
					else if (j > center + i + 1) {
						cout << " ";
					}
					else if (j > center + i) {
						cout << "\\";
					}
					else cout << " ";
				}
			}
			else if (i > center) {
				if (j > i - center || j < i + center || j == center) {
					if (j < i - center - 1) {
						cout << " ";
					}
					else if (j < i - center) {
						cout << "\\";
					}
					else if (j == center) {
						cout << "";
					}
					else if (j > n - (i - center)) {
						cout << " ";
					}
					else if (j > n - (i - center) - 1) {
						cout << "/";
					}

					else cout << " ";
				}
			}
		}
		cout << endl;
	}
#endif // RHOMBUS

#ifdef PLUSMINUS

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
				cout << "+";
			}
			else cout << "-";
		}
		cout << endl;
	}
#endif // PLUSMINUS
#endif // GEOMETRIAL

#ifdef HARDCHESS
	cout << "¬ведите размер пол€: "; cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				for (h = 0; h < n; h++) {
					if ((i + k) % 2 == 0) {
						cout << "*";
					}
					else cout << " ";
				}

			}
			cout << endl;

		}

	}
#endif // HARDCHESS

#ifdef CHESS
	cout << "¬ведите размер доски: ";  cin >> n;
	n += 2;
	setlocale(LC_ALL, ".866");
	for (i = 0; i < n; i++) {
		cout << "\t\t";
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1) {
				cout << (char)196;
			}
			else if (j == 0 || j == n - 1) {
				cout << (char)179;
			}
			else if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
				cout << (char)219;
			}
			else cout << (char)32;
		}
		cout << endl;
	}
#endif // CHESS


}
