/*Project 002 from projecteuler.net
 *By considering the terms in the Fibonacci sequence whose values do not exceed four million find the sum of the even-valued terms.
 *Coded by: James Standeven
 */

#include <iostream>
#include <vector>
using namespace std;

//Upper bound
#define TOP 4000000

//Function prototypes
void generate(vector<int> &);
int calculate(vector<int> &);

int main()
{
  vector<int> myVec;

  generate(myVec);

  for(int c = 0; c < myVec.size(); c++)
  {
    cout << myVec[c] << endl;
  }
  
  cout << calculate(myVec) << endl;

  return 0;
}

void generate(vector<int> &fibVec)
{
  int low = 1;
  int high = 2;  
  int sum = 3; 

  fibVec.push_back(low);
  fibVec.push_back(high);

  while(low + high < TOP)
  {
    sum = low + high;
    fibVec.push_back(sum);
    low = high;
    high = sum;
  } 
}

int calculate(vector<int> &fibVec)
{
  int sum = 0;
  
  for(int c = 0; c < fibVec.size(); c++)
  {
    if(fibVec[c] % 2 == 0) sum += fibVec[c];
  }
  
  return sum;
}

