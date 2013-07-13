/*
	Projecteuler.net question 10
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

	Find the sum of all the primes below two million.

	By James Standeven
*/

#include <iostream>
#include <vector>

#define SIZE 2000000

int main(){
	std::vector <int> primes;
	
	//Load primes with all numbers between 2 - 1999999
	for(int c = 2; c < SIZE; c++){
		primes.push_back(c);
	}
	
	//Sieve out primes
	int count = 0;
	int prime = 2;
	while(prime < SIZE){
		for(int c = 0; c < primes.size(); c++){
			if(primes[c] % prime == 0 && primes[c] != prime){
				primes.erase(c);
			}
		}
		prime = primes[++count];
		primes.shrink_to_fit();
	}
	
	//Sum the primes
	int sum;
	for(int c = 0; c < primes.size(); c++){
		sum += primes[c];
	}
	
	std::cout << sum << std::endl;
}
