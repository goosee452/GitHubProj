#include "Header.h"


int main() {


	int a, b, c, d;
	cin >> a >> b >> c >> d;
    
	int max = a > b ? a : b;
	max > c ? max : max = c;
	max > d ? max : max = d;
	
	cout << max;

	return 0;
}
