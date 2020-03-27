#include <iostream>
using namespace std;
int main() {
  int n;
  int k = 10;

  bool Chislo = true;
  cout << "n="; cin >> n;
  
  while (n > 0) 
  {
    if (n % 10 < k) 
	{
      k = n % 10;
    }
	
    else 
	{
      Chislo = false;
      break;
    }
	
    n /= 10;
  }
  
  (Chislo) ? cout << "true" : cout<< "false";
  return 0;
}