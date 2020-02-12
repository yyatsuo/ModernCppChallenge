#include <iostream>
#include <numeric>
#if 0
unsigned int gcd(const unsigned int a, const unsigned int b) {
  return (b == 0) ? a : gcd(b, a % b);
}
#endif

int main() {
  int a, b;
  std::cout << "Input integer 1 >>"; std::cin >> a;
  std::cout << "Input integer 1 >>"; std::cin >> b;
  std::cout << "Greate common divisor: " << std::gcd(a,b) << std::endl;
}
