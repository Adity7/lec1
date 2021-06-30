#nclude<iostream>
using namespace std;

class Solution{
public:
  int minsteps(string s, string t){
    vector<int> c1(26), c2(26);
    for(char c:s){
      ++c1[c-'a'];
    }
    for(char c:t){
      ++c2[c-'a'];
    }
    int ans = 0;
    for(int i=0; i<26; i++){
      ans += abs(c1[i]-c2[i]);
    }
    return ans/2;
  }
}
