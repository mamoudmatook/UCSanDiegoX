#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;
bool cmp(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    // you should probably also add some code to prevent dividing by zero...
    return (static_cast<double>(a.first)/a.second) > (static_cast<double>(b.first)/b.second);
}

double get_optimal_value(vector<pair<int,int>> &wvalues,int capacity) {
  double value = 0.0;
  //int m=wvalues.size();
  //
  int n;
  double m;
  vector<pair<int,int>>::iterator ptr;
  for(ptr=wvalues.begin();ptr<wvalues.end();ptr++)
  {     
	if(ptr->second<capacity)  
		n=ptr->second/capacity+ptr->second%capacity;
	else if(ptr->second>capacity) 
		n=capacity/ptr->second+capacity%ptr->second;
	else
		n=capacity;

	m=static_cast<double>(ptr->first)/ptr->second;
       value+=m*n;
       capacity-=n;
      if(capacity<=0)
       break;	      


  }

  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
   int v,w;
vector< pair<int,int> > wvalues;
  for (int i = 0; i < n; i++) {
	 	  cin>>v>>w;
	  wvalues.push_back(make_pair(v,w));
    	  
    
  }


  sort(wvalues.begin(),wvalues.end(),cmp);

  double optimal_value = get_optimal_value(wvalues,capacity);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
