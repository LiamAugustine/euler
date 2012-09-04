/*Project 001 from projecteuler.net
 *Find the sum of all the multiples of 3 or 5 below 1000
 *Coded by: James Standeven
 */



#include <iostream>
using namespace std;

#define TOP 1000

int main()
{
  int sum = 0;
  
  for(int c = 0; c < TOP; c++)
  {
    if(c % 3 == 0)
      sum += c;
    else if(c % 5 == 0)
      sum += c;
  }

  cout << sum << endl;

  return 0;
}

