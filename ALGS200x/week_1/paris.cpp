#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits.h>
using namespace std;

long long  MaxPairwiseProduct( std::vector<long long >& numbers) {
    long long max_product = 0;
    long long  n = numbers.size();

    for (long long  first = 0; first < n; ++first) {
        for (long long  second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}


long long   MaxPairwiseProductFast( vector<long long   >& numbers) {
  
  long long   n = numbers.size();
 long long    i_f_bigger=INT_MIN;
 long long    i_s_bigger=INT_MIN;
  for (long long  i = 0; i < n; i++) {
	  if(numbers[i]>i_f_bigger)
	  {
		  i_s_bigger=i_f_bigger;
		  i_f_bigger=numbers[i];
	  }
	  else if (numbers[i]>i_s_bigger)
		  i_s_bigger=numbers[i];
   
   }
 long long result =i_s_bigger*i_f_bigger;
 //cout<<i_f_bigger<<" "<<i_s_bigger<<endl;
  
  return result;
}

int main() {
/*	while(true)
	{        
		long long n;
		n=random()%10+2;
		vector<long long> numbers(n);
		for(long long i=0;i<n;i++)
			numbers[i]=random()%1000;
		for(long long i=0;i<n;i++)
			cout<<numbers[i]<<" ";
		cout<<endl;
		long long result1=MaxPairwiseProductFast(numbers);
		long long result2=MaxPairwiseProduct(numbers);
		if(result1==result2)
			cout<<"OK"<<endl;
		else
		{       cout<<result1<<" "<<result2<<endl;
			cout<<"WRONG"<<endl;
			return -1;
		}
	}
*/


    long long  n;
    cin >> n;
    vector<long long > numbers(n);
    for (long long  i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long   result = MaxPairwiseProductFast(numbers);
    cout << result << "\n";
    return 0;
}

