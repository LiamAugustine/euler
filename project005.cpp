/*What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <iostream>
using namespace std;
#define MAX 20

int main()
{
  int test = 380;
  bool result = false;

  while(!result)
  {
    int accum = 1;
    
    for(int n = 3; n < MAX; n++)
    {
      if(test%n == 0) accum++;
      else n = MAX + 1;
    }

    if(accum > 16) result = true;
    else test += 380;
  }
  
  cout << "result: " << test << endl;

  return 0;
}
