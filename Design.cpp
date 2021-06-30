#include<iostream>
#include<map>
using namespace std;

class UndergroundSystem{
public:
  map<int, pair<string, int>> mp1;  // id, station, time of CheckIn
  map<string, pair<int, int> mp2;  // station1-station2(route), totaltime, numofPassangr
  UndergroundSystem(){  //constructor
    mp1 = map<int, pair<string, int>>();
    mp2 = map<pair<string,string>,pair<int,int>>();
  }

  void CheckIn(int id, string stationName, int  t){
    mp1[id] = make_pair(stationName, t);
  }

  void checkOut(int id, string stationName, int t){
    pair<string, int> p=mp1[id];
    mp1.erase(id);
    pair<string, string> q=make_pair(p.first, stationName);
    ++mp2[q].first;
    mp2[q] - scond = t-p.second;
  }

  double getAverageTime(string startStation, string endStation){
    pair<string, string> p=make_pair(startStation, endStation);
    return (double)mp2[p].second/mp2[p].first;
  }

};
