#include <iostream>
using namespace std;

int main() {
	float x, y;
	
	x = 0;
	y = 0;
	cin >> x;

	float tempx =x;
	y = 2*(x++)+1;


	cout << x << " "<< y << endl;

	x = tempx;

	y = 2*(++x)+1;

	cout << x << " "<< y << endl;

	return 0;
}