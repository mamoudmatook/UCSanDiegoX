#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int MaxPairwiseProduct(const vector<int>& numbers) {
  
  int n = numbers.size();
 int i_f_bigger=0;
 int i_s_bigger=0;
 int temp;
  for (int i = 1; i < n; ++i) {
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
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long int  result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}

