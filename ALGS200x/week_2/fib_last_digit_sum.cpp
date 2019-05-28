#include <iostream>

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
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
