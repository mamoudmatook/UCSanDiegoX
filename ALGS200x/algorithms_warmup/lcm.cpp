#include <iostream>

long long int gcd_fast(long long int a,long long int b)
{
 if (a%b==0)
  return b;
else return gcd_fast(b,a%b);
}


long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      

  return (long long) a * b;
}

long long int lcm_fast(long long int a,long long int b)
{

  return (long long int)a*b/gcd_fast(a,b);
}


int main() {
  int a, b;
  std::cin >> a >> b;
  //std::cout << lcm_naive(a, b) << std::endl;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}

