#include<iostream>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  ListNode(int x){
    val = x;
    next = NULL;
  }
};

ListNode* reverse1(ListNode* head){
  ListNode* temp = NULL;
  ListNode* prev = NULL;
  ListNode* curr = head;
  while(curr!=NULL){
    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  return prev;
}

vector<int> nextLargerNodes(ListNode* head){
  stack<int> s;
  head = reverse1(head);
  vector<int> res;
  s.push(head->val);
  res.push_back(0);
  ListNode* curr = head->next;
  while(curr!=NULL){
    while(!s.empty() && s.top()<=curr->val){
      s.pop();
    if(s.empty()){
      res.push_back(0);
    }
    else{
      res.push_back(s.top());
    }
    s.push(curr->val);
    curr = curr->next;
    }

  }

  reverse(res.begin(), res.end());
  return res;

}
