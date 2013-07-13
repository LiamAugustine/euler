/*
	User divyekapoor's solution.
	Way better than mine.
*/

#include <iostream>
#include <bitset>
using namespace std;

#define SIZE 2000000

int main(){
	bitset<SIZE> Sieve;
	unsigned long sum = 0;

	Sieve.flip();
	Sieve[0].flip();
	Sieve[1].flip();

	for(long i = 2; i < SIZE; ++i){
		if( !Sieve[i]) continue;
		else
			for(long j = 2 * i; j < SIZE; j += i)
				Sieve[j] = 0;
	}

	for(long i = 2; i < SIZE; ++i)
		if(Sieve[i])
			sum += i;

	cout << sum << endl;

	return 0;
}
