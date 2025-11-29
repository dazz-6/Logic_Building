#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a1, a2;
  cin >> a1;
  cin >> a2;
  // int nth_term = a1;
   int d = a2-a1;
  // for(int i =1; i<n ;i++){
  //   nth_term += d;  
  // }


  // OR WE CAN USE AP FORMULA: An = a + (n-1)*d

  int nth_term = a1 + (n-1)*d;
  cout << nth_term;
}