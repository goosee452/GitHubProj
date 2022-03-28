#include "Header.h"


int main() {


	int a, b, c;
	cin >> a >> b >> c;
    
	int max = a > b ? a : b;
	max > c ? max : max = c;
	cout << max;

	return 0;
}