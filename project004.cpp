/*A panlindromic number reads the same both ways.
  The largest palindrome made from the product of two
  2-digit numbers is 9009 = 91 * 99.

  Find the largest palindrome made from the product of
  two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string pd, dp, result = "0";
  stringstream test;
  int num=0;

  for(int x = 999; x > 900; x--)
  {
    for(int y = 999; y > 900; y--)
    {
      test << (x*y);
      pd = test.str();
      dp = string(pd.rbegin(), pd.rend());

      if(pd == dp && (x*y) > num)
      {
        result = pd;
        num = (x*y);
      }  

      test.str("");
      test.clear();
    }
  }
  cout << "result is: " << result << endl;

  return 0;
}
