#include <iostream>
#include <vector>
using namespace std;
long long  MaxPairwiseProduct( vector<long long >& numbers) {
  
  long long  n = numbers.size();
 long long  i_f_bigger=0;
 long long  i_s_bigger=0;
 long long  temp;
  for (long long  i = 1; i < n; ++i) {
   if (numbers[i]>numbers[i_s_bigger])
    i_s_bigger=i;
   if(numbers[i_s_bigger]>numbers[i_f_bigger])
    temp=i_f_bigger;
   i_f_bigger=i_s_bigger;
   i_s_bigger=temp;
  }
 long long result =numbers[i_f_bigger]*numbers[i_s_bigger];
  
  return result;
}

int main() {
    long long  n;
    cin >> n;
    vector<long long > numbers(n);
    for (long long  i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long   result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}

