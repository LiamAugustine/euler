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
	primes.push_back(2);
	primes.push_back(3);

	//Load primes with number
	for(int c = 5; c < SIZE; c += 2){
		primes.push_back(c);
	}

	std::cout << "Sieve out primes" << std::endl;	
	//Sieve out primes
	int count = 1;
	int prime = 3;
	while(prime < 1415){
		//std::cout << "While" << std::endl;
		for(int c = 0; c < primes.size(); c++){ 
			if(primes[c] % prime == 0 && primes[c] != prime){
				primes.erase(primes.begin() + c);
			}
		}
		std::cout << prime << std::endl;
		prime = primes[++count];
	}
	
	//Sum the primes
	unsigned long sum;
	for(int c = 0; c < primes.size(); c++){
		sum += primes[c];
		std::cout << sum << std::endl;
	}
	

	std::cout << sum << std::endl;

}
