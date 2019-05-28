#include <iostream>
#include <vector>
using std::vector;

int fibonacci_sum_naive(unsigned long long n) {
    if (n <= 1)
        return n;
      n=(n+2)%60;
    long long previous = 0;
    long long current  = 1;
    //long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
        
    }
  if(current == 0){
        return 9;
    }

    return (current-1);
}

int main() {
    long long from, to;
    std::cin >> from >> to;
 int diff=0;
    int l= fibonacci_sum_naive(to) - fibonacci_sum_naive(from-1);
  if (l<0)
    l=l+10;
   
    std::cout << l << '\n';
}

