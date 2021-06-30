#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
int findlucky(vector<int>& arr){
  int ans = -1;
  map<int,int> m;
  for(int i : arr){
    m[i]++;
  }
  for(auto p : m){
    if(p.first == p.second){
      ans = p.first;
    }
  }
  return ans;
}
};
