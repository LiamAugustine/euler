/*
	Projecteuler.net question 9
	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
	
	by James Standeven
*/

#include <iostream>
using namespace std;

int main(){
	unsigned long m = 1,
			n = 2,
			a = 0,
			b = 0,
			c = 0;
	while((a + b + c) != 1000){
		a = (n*n) - (m*m);
		b = 2 * n * m;
		c = (n*n) + (m*m);
		if(a+b+c == 1000) cout << a*b*c << endl;
		m++;
		if(m == n) n++;
	}
}
