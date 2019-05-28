#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    int number_of_refills=0;
    int current_refill=0;
    int last_refill=0;
    int m=stops.size();
    int n=m-2;
    while(current_refill<=n)
    {          
	    last_refill=current_refill;
	    while(stops[current_refill+1]-stops[last_refill]<=tank &&current_refill<=n)
		    current_refill++;
	   if(current_refill==last_refill) 
		    return -1;
	   if(current_refill<=n)
	    number_of_refills++;
	    
    }
	    return number_of_refills;

}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
  unsigned   int n = 0;
    cin >> n;
int mm=n+2;
    vector<int> stops(mm);
    stops[0]=0;
    for (size_t i = 1; i <=n; ++i)
        cin >> stops.at(i);
stops[n+1]=d;
    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
