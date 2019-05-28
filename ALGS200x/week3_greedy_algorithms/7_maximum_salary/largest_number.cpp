#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool cmp(string a,string b)
{ 
	return a+b > b+a ;
}
string largest_number(vector<string> a) {
  //write your code here
  std::stringstream ret;
  for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}


int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  sort(a.begin(),a.end(),cmp);
  std::cout << largest_number(a);
}
