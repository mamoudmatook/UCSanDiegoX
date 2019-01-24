#include <iostream>
using namespace std;
long long get_fibonacci_huge_naive(long long n, long long m) {
   if (n<=1)
    return n;
    long long previous = 0;
    long long current  = 1;
    int period; 
    for (long long i = 0; i < n-1 ; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
	cout << current<<" "<<endl;
    if(i !=1 && current==1 && previous==0)
     {
	     period=(i+1);
      break;
      
    }
    }
    cout << period <<endl;
    if(period !=0)

   n=n%period;
    if(n<=1)
	    return n;
 previous=0;
 current=1;
    for (long long i = 0; i < n-1 ; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
    }
    
 
    return current ;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}

