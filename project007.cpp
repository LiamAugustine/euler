/*What is the 10 001st prime number?
*/
#include <iostream>
#include <vector>

#define SIZE 10001

int main()
{
  std::vector <int>primes;
  int primeCount = 2;
  int value = 5;
  primes.push_back(2);
  primes.push_back(3);

  while(primeCount < SIZE)
  {
    bool isPrime = false;

    while(!isPrime)
    {
      int c = 0;
      int i = 0;

      for(; c < primes.size(); c++)
      {
//        std::cout << primes[c] << std::endl;
        if(value % primes[c] == 0)
        {
          i++;
        }
      }

      if(i != 0);
      else     
      {
        primes.push_back(value);
        isPrime = true;
        primeCount++;
      }

      value += 2;
    }
  }
//  for(int c = 0; c < primes.size(); c++)
//    {std::cout << primes[c] << std::endl;}

  std::cout << primes[SIZE - 1] << std::endl;
}

