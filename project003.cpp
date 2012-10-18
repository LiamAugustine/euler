/*Project 003 from projecteuler.net
 *What is the largest prime factor of the number 600851475143
 *Coded by: James Standeven
 */

#include <iostream>
#include <vector>
using namespace std;

//Number to be evaluated
#define NUM 600851475143 //number can be easily changed

int main()
{
  long long num = NUM;//allows manipulation of NUM
  vector<int> factorVec;//holds the prime factors of NUM.
  int c = 2;

  do
  {
    bool prime = true;
    if(num % c == 0)//finds the factors of num
      for(int i = 2; i < c; i++)//cycles through the numbers between 1 and c
      {
        if(c % i == 0) prime = false;//if c can be divided by any number other than 1 or c it is not prime
        if(prime)
        {
          num = num/c;//resize num
          factorVec.push_back(c);//add factor to the vector
          i = c;//stop for loop
        }
      }
    c++;
  }while(num > 1);
  
  cout << factorVec.back() << endl;//show largest factor

  return 0;
}

