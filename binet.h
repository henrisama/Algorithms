#include <cmath>

unsigned long long int binet(int n){
    return (1/sqrt(5)) * (pow((1 + sqrt(5))/2, n) - (pow((1 - sqrt(5))/2, n)));
}
// Corresponding to the nth Fibonacci number