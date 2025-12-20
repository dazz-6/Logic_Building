#include<bits/stdc++.h>
using namespace std;

// int main(){
//   int reverse = 0;
//   int n;
//   cin >> n;
//   while ( n> 0){
//     int last_digit = n %10;
//     reverse = (reverse * 10 + last_digit);
//     n = n / 10;
//   }
//   cout << reverse;
// }

//better approach with logn space and time complexity:logn and 1
//string 

int main(){
  int n;
  cin >> n;
  string s = to_string(n);
  reverse(s.begin(),s.end());
  n =stoi(s);
  cout << n;
}