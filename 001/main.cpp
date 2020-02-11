// 3または5で割り切れる正の整数の総和
#include <iostream>

int main()
{
  unsigned limit = 0;
  std::cout << "Upper limit:";
  std::cin >> limit;
  unsigned long long sum = 0;
  for (unsigned int i = 3; i < limit; ++i)
  {
    if(i%3 == 0 || i%5 == 0) sum += i;
  }
  std::cout << "sum=" << sum << std::endl;
  return 0;
}
