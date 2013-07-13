/*
	Projecteuler.net question 9
	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
	
	by James Standeven
*/

#include <iostream>
using namespace std;

int main(){
	int	a = 0,
			b = 0,
			c = 0;
	for(int n = 0; n < 1000/2; n++){
		for(int m = 0; m < n; m++){
			a = (n*n) - (m*m);
			b = 2 * n * m;
			c = (n*n) + (m*m);
			if(a+b+c == 1000) {
				cout << a*b*c << endl;
				}
		}
	}
	return 0;
}
