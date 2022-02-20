#include<bits/stdc++.h>

std::string decimal_binary(int num){
  std::string binary = "";
  int res = 0;
  
  while(num != 0){
    res = num % 2;
    res == 1? binary.append("1") : binary.append("0");
    num /= 2;
  }

  reverse(binary.begin(), binary.end());
  return binary;
}