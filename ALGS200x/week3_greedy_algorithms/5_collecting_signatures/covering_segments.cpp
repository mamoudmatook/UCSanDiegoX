#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/*struct Segment {
  int start, end;
};*/
bool cmp(pair<int,int>a,pair<int,int>b)
{
	return a.second<b.second;
}
vector<int> optimal_points(vector< pair<int,int> > &segments) {
  vector<int> points;
  //write your code here
  int last_point=segments[0].second;
  points.push_back(last_point);
  for (size_t i = 0; i < segments.size(); ++i) {
	  if(last_point>=segments[i].first && last_point<=segments[i].second)
		  continue;
	  else    {
		  points.push_back(segments[i].second);
		  last_point=segments[i].second;
	  }
  }
  return points;
}

int main() {
  unsigned int n;
  std::cin >> n;
  vector< pair<int,int> > segments;
  for (size_t i = 0; i < n; ++i) {
	  int n,m;
	  cin>>n>>m;
	  segments.push_back(make_pair(n,m));
  }
  sort(segments.begin(),segments.end(),cmp);
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
