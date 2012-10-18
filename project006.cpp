/*Find the difference between the sum of the squares of the first one
  hundred natural numbers and the square of the sum
*/

#include <iostream>

int main()
{
  long sumOfSq=0, sqOfSum=0;

  for(int n = 1; n < 101; n++)
  {
    sqOfSum += n;
    sumOfSq += (n*n);
  }
  
  std::cout << "result: " << sqOfSum*sqOfSum - sumOfSq << std::endl;

  return 0;    
}

