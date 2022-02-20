#include <cstring>
#include <cmath>

int binary_decimal(const char* binary) {
  int sum = 0; int power = 0;
  int len = strlen(binary) - 1;

  for ( ; len >= 0; len--){
    if(binary[len] == '1'){
      sum += pow(2, power);
    }
    power++;
  }
  
  return sum;
}