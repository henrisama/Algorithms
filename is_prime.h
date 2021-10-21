#include <cmath>

bool isPrime(int num){
  if(num == 1 || num == 0)
    return false;

  int _sqrt = sqrt(num);
  bool div = true;

  for (int i = 2; i <= _sqrt; i++){
    if(num%i == 0) div = false;
  }
  
  return div;
}